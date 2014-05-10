/*
 * Copyright (C) 2011 Neil McGill
 *
 * See the LICENSE file for license.
 */

#define __STDC_LIMIT_MACROS
#include <SDL.h>
#include <pthread.h>

#include "main.h"
#include "thing.h"
#include "level_private.h"
#include "wid_game_map_server.h"
#include "map.h"

static FILE *fp;
static const int8_t is_a_wall = 63;
static const int8_t not_preferred = 62;

static pthread_t dmap_thread;
static pthread_mutex_t dmap_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t dmap_condition_var = PTHREAD_COND_INITIALIZER;

/*
 * Final dmaps
 */
static level_walls dmap_monst_map_treat_doors_as_passable;
static level_walls dmap_monst_map_treat_doors_as_walls;

/*
 * Scratch pad dmaps are updated to the above dmaps when complete so the 
 * monster never sees a partail dmap.
 */
static level_walls dmap_monst_map_treat_doors_as_passable_scratchpad;
static level_walls dmap_monst_map_treat_doors_as_walls_scratchpad;

/*
 * Djkstra maps so we can quickly tell the next hop.
 *
 * This is for every single map position, how to get there.
 */
static level_walls dmap_monst_map_wander[TILES_MAP_WIDTH][TILES_MAP_HEIGHT];

/*
 * Print the Dijkstra map scores shared by all things of the same type.
 */
static void dmap_print (levelp level, level_walls *dmap)
{
    int8_t x;
    int8_t y;

    if (!fp) {
        fp = fopen("map.txt", "w");
    }

    for (y = 0; y < TILES_MAP_HEIGHT; y++) {
        for (x = 0; x < TILES_MAP_WIDTH; x++) {
            if (map_is_bomb_at(level, x, y)) {
                fprintf(fp, " Bo ");
                continue;
            }
            if (map_is_exit_at(level, x, y)) {
                fprintf(fp, " Ex ");
                continue;
            }
            if (map_is_spam_at(level, x, y)) {
                fprintf(fp, " Sp ");
                continue;
            }
            if (map_is_door_at(level, x, y)) {
                fprintf(fp, " Do ");
                continue;
            }
            if (map_is_generator_at(level, x, y)) {
                fprintf(fp, " Gn ");
                continue;
            }
            if (map_is_food_at(level, x, y)) {
                fprintf(fp, " Fd ");
                continue;
            }

            if (!map_is_floor_at(level, x, y)) {
                fprintf(fp, " -- ");
                continue;
            }

            fprintf(fp, "%4d", dmap->walls[x][y]);
        }

        fprintf(fp, "\n");
    }

    fprintf(fp, "\n");
}

/*
 * Print the Dijkstra map scores shared by all things of the same type.
 */
static void dmap_thing_print (thingp t, 
                              int8_t nexthop_x,
                              int8_t nexthop_y)
{
    int8_t x;
    int8_t y;

    if (!fp) {
        fp = fopen("map.txt", "w");
    }

    int8_t tx;
    int8_t ty;

    tx = (int)(t->x + 0.5);
    ty = (int)(t->y + 0.5);

    for (y = 0; y < TILES_MAP_HEIGHT; y++) {
        for (x = 0; x < TILES_MAP_WIDTH; x++) {
            if ((nexthop_x == x) && (nexthop_y == y)) {
                fprintf(fp, " Nh ");
            } else {
                if ((x == tx) && (y == ty)) {
                    fprintf(fp, " Mo ");
                } else {
                    fprintf(fp, "%4d", 
                            dmap_monst_map_treat_doors_as_walls.walls[x][y]);
                }
            }
        }

        fprintf(fp, "\n");
    }

    fprintf(fp, "\n");
}

/*
 * http://www.roguebasin.com/index.php?title=The_Incredible_Power_of_Dijkstra_Maps
 *
 * To get a Dijkstra map, you start with an integer array representing your
 * map, with some set of goal cells set to zero and all the rest set to a very
 * high number. 
 *
 * Iterate through the map's "floor" cells -- skip the impassable wall cells.
 * If any floor tile has a value that is at least 2 greater than its 
 * lowest-value floor neighbor, set it to be exactly 1 greater than its lowest 
 * value neighbor. Repeat until no changes are made. The resulting grid of 
 * numbers represents the number of steps that it will take to get from any 
 * given tile to the nearest goal. 
 */
static void dmap_process (level_walls *dmap, level_walls *dmap_final)
{
    uint8_t x;
    uint8_t y;
    int8_t a;
    int8_t b;
    int8_t c;
    int8_t d;
    int8_t *e;
    int8_t f;
    int8_t g;
    int8_t h;
    int8_t i;
    int8_t lowest;
    uint8_t changed;

    do {
        changed = false;

        for (x = 1; x < TILES_MAP_WIDTH - 1; x++) {
            for (y = 1; y < TILES_MAP_HEIGHT - 1; y++) {
                e = &dmap->walls[x  ][y];
                if (*e == is_a_wall) {
                    continue;
                }

                a =  dmap->walls[x-1][y-1] * 2;
                b =  dmap->walls[x  ][y-1];
                c =  dmap->walls[x+1][y-1] * 2;

                d =  dmap->walls[x-1][y];
                f =  dmap->walls[x+1][y];
                 
                g =  dmap->walls[x-1][y+1] * 2;
                h =  dmap->walls[x  ][y+1];
                i =  dmap->walls[x+1][y+1] * 2;

                lowest = min(a, 
                             min(b, 
                                 min(c, 
                                     min(d, 
                                         min(f, 
                                             min(g, 
                                                 min(h,i)))))));

                if (*e - lowest >= 2) {
                    *e = lowest + 1;
                    changed = true;
                }
            }
        }
    } while (changed);

    /*
     * Only update the map when done so the monsters never see a map work
     * in progress.
     */
    memcpy(dmap_final, dmap, sizeof(level_walls));
}

/*
 * Generate goal points with a low value.
 */
static uint32_t dmap_goals_set (boolean test, level_walls *dmap)
{
    uint32_t checksum = 0;
    thingp thing_it;
    int8_t x;
    int8_t y;

    { TREE_OFFSET_WALK_UNSAFE(server_player_things, thing_it) {
        /*
         * Only chase players.
         */
        if (!thing_is_player_fast(thing_it)) {
            continue;
        }

        /*
         * Ignore dead players.
         */
        if (thing_is_dead_fast(thing_it)) {
            continue;
        }

        /*
         * Aim for center of tile.
         */
        x = (int)(thing_it->x + 0.5);
        y = (int)(thing_it->y + 0.5);

        if (!test) {
            dmap->walls[x][y] = 0;
        }

        checksum ^= x | (y << 16);
        checksum = checksum << 1;
    } }

    return (checksum);
}

/*
 * Initialize the djkstra map with high values.
 */
static void dmap_init (level_walls *dmap, const level_walls *map)
{
    int8_t x;
    int8_t y;

    for (x = 0; x < TILES_MAP_WIDTH; x++) {
        for (y = 0; y < TILES_MAP_HEIGHT; y++) {
            if (map->walls[x][y] != ' ') {
                dmap->walls[x][y] = is_a_wall;
                continue;
            }

            dmap->walls[x][y] = not_preferred;
        }
    }
}

/*
 * Run forever waiting to be woken up and then running the djkstra map.
 */
static void *dmap_process_thread (void *context)
{
    for (;;) {
        pthread_mutex_lock(&dmap_mutex);

        pthread_cond_wait(&dmap_condition_var, &dmap_mutex );

        /*
         * Start with a clean dmap for each set of obstacles to consider.
         */
        dmap_process(&dmap_monst_map_treat_doors_as_passable_scratchpad,
                     &dmap_monst_map_treat_doors_as_passable);
        dmap_process(&dmap_monst_map_treat_doors_as_walls_scratchpad,
                     &dmap_monst_map_treat_doors_as_walls);

        pthread_mutex_unlock(&dmap_mutex);
    }

    return (0);
}

/*
 * Wake up the thread that creates the djkstra map.
 */
static void dmap_process_wake (levelp level)
{
    static uint32_t dmap_checksum;

    /*
     * Only reprocess the djkstra map if something has changed on the map
     * We use a checksum of the goals to indicate this with reasonable 
     * certainty.
     */
    uint32_t checksum = dmap_goals_set(true /* test */, 0);
    if (!checksum) {
        return;
    }

    if (dmap_checksum == checksum) {
        return;
    }

    if (!pthread_mutex_trylock(&dmap_mutex)) {
        return;
    }

    dmap_checksum = checksum;

    dmap_init(&dmap_monst_map_treat_doors_as_passable_scratchpad,
              &level->monst_map_treat_doors_as_passable);
    dmap_goals_set(false /* test */,
                   &dmap_monst_map_treat_doors_as_passable_scratchpad);

    dmap_init(&dmap_monst_map_treat_doors_as_walls_scratchpad,
              &level->monst_map_treat_doors_as_walls);
    dmap_goals_set(false /* test */,
                   &dmap_monst_map_treat_doors_as_walls_scratchpad);

    /*
     * Now wake the dmap processor.
     */
    pthread_cond_signal(&dmap_condition_var);

    pthread_mutex_unlock(&dmap_mutex);
}

void dmap_process_init (void)
{
    if (dmap_thread) {
        return;
    }

    int rc = pthread_create(&dmap_thread, NULL, &dmap_process_thread, NULL);

    if (rc != 0) {
        DIE("no dmap thread %s", strerror(rc));
    }
}

void dmap_process_fini (void)
{
    return;

    if (dmap_thread) {
        pthread_join(dmap_thread, NULL);
        dmap_thread = 0;
    }
}

/*
 * Generate maps to allow things to wander to any location.
 */
void dmap_generate_monst_map_wander (levelp level)
{
    level_walls tmp;
    uint32_t x, y;

    for (x = 0; x < TILES_MAP_WIDTH; x++) {
        for (y = 0; y < TILES_MAP_HEIGHT; y++) {
            dmap_init(&tmp, &level->monst_map_treat_doors_as_walls);

            /*
             * Set the goal.
             */
            tmp.walls[x][y] = 0;

            dmap_process(&tmp, &dmap_monst_map_wander[x][y]);
        }
    }
}

/*
 * Generate a djkstra map for the thing.
 */
static void dmap_generate (levelp level)
{
    dmap_process_wake(level);

#ifdef ENABLE_MAP_DEBUG
    if (1)
#else
    if (0)
#endif
    dmap_print(level, &dmap_monst_map_treat_doors_as_passable);
}

/*
 * Generate a djkstra map for the thing.
 */
void thing_generate_dmaps (void)
{
    dmap_generate(server_level);
}

static boolean thing_find_nexthop_dmap (thingp t, 
                                        level_walls *dmap,
                                        int32_t *nexthop_x, 
                                        int32_t *nexthop_y)
{
    int8_t x;
    int8_t y;

    x = (int)(t->x + 0.5);
    y = (int)(t->y + 0.5);

    int8_t a;
    int8_t b;
    int8_t c;
    int8_t d;
    int8_t e;
    int8_t f;
    int8_t g;
    int8_t h;
    int8_t i;
    int8_t lowest;

    a = dmap->walls[x-1][y-1];
    b = dmap->walls[x  ][y-1];
    c = dmap->walls[x+1][y-1];

    d = dmap->walls[x-1][y];
    e = dmap->walls[x  ][y];
    f = dmap->walls[x+1][y];
        
    g = dmap->walls[x-1][y+1];
    h = dmap->walls[x  ][y+1];
    i = dmap->walls[x+1][y+1];

    lowest = min(a, min(b, min(c, min(d, min(e, min(f, min(g, min(h,i))))))));

    if (a != lowest) { a += not_preferred; }
    if (b != lowest) { b += not_preferred; }
    if (c != lowest) { c += not_preferred; }
    if (d != lowest) { d += not_preferred; }
    if (e != lowest) { e += not_preferred; }
    if (f != lowest) { f += not_preferred; }
    if (g != lowest) { g += not_preferred; }
    if (h != lowest) { h += not_preferred; }
    if (i != lowest) { i += not_preferred; }

    lowest = min(a, min(b, min(c, min(d, min(e, min(f, min(g, min(h,i))))))));

    int8_t dx = 0;
    int8_t dy = 0;

    if (a == lowest) { dx = -1; dy = -1; }
    else if (b == lowest) { dx =  0; dy = -1; }
    else if (c == lowest) { dx = +1; dy = -1; }
    else if (d == lowest) { dx = -1; dy =  0; }
    else if (e == lowest) { dx =  0; dy =  0; }
    else if (f == lowest) { dx = +1; dy =  0; }
    else if (g == lowest) { dx = -1; dy =  1; }
    else if (h == lowest) { dx =  0; dy =  1; }
    else if (i == lowest) { dx = +1; dy =  1; }
    else {
        return (false);
    }

    /*
     * Best hop is into something we can't move onto?
     */
    if (lowest == not_preferred) {
        return (false);
    }

    if (lowest == is_a_wall) {
        return (false);
    }

    /*
     * Success.
     */
    *nexthop_x = x + dx;
    *nexthop_y = y + dy;

#ifdef ENABLE_MAP_DEBUG
    if (1)
#else
    if (0)
#endif
    dmap_thing_print(t, *nexthop_x, *nexthop_y);

    return (true);
}

static boolean thing_try_nexthop (thingp t,
                                  level_walls *dmap,
                                  int32_t *nexthop_x, int32_t *nexthop_y)
{
    if (thing_find_nexthop_dmap(t, dmap, nexthop_x, nexthop_y) &&
        thing_server_move(t, *nexthop_x, *nexthop_y,
                          *nexthop_y < t->y, *nexthop_y > t->y,
                          *nexthop_x < t->x, *nexthop_x > t->x, false)) {
        return (true);
    }

    return (false);
}

boolean thing_find_nexthop (thingp t, int32_t *nexthop_x, int32_t *nexthop_y)
{
    /*
     * Start out with treating doors as passable.
     */
    if (!t->dmap) {
        t->dmap = &dmap_monst_map_treat_doors_as_passable;
    }

    /*
     * Try the current map.
     */
    if (thing_try_nexthop(t, t->dmap, nexthop_x, nexthop_y)) {
        return (true);
    }

    /*
     * Try the alternative map.
     */
    if (t->dmap == &dmap_monst_map_treat_doors_as_passable) {
        t->dmap = &dmap_monst_map_treat_doors_as_walls;
    } else {
        t->dmap = &dmap_monst_map_treat_doors_as_passable;
    }

    if (thing_try_nexthop(t, t->dmap, nexthop_x, nexthop_y)) {
        return (true);
    }

    /*
     * Try the wander map.
     */
    if (t->dmap_wander) {
        if (!t->dmap_wander->walls[(int)t->x][(int)t->y]) {
            /*
             * Reached the destination. Try a new map.
             */
            t->dmap_wander = 0;
        }
    }

    uint32_t x = rand() % TILES_MAP_WIDTH;
    uint32_t y = rand() % TILES_MAP_HEIGHT;

    if (!t->dmap_wander) {
        t->dmap_wander = &dmap_monst_map_wander[x][y];
    }

    if (thing_try_nexthop(t, t->dmap_wander, nexthop_x, nexthop_y)) {
        return (true);
    }

    /*
     * Try a new wander map next time.
     */
    t->dmap_wander = &dmap_monst_map_wander[x][y];

    return (false);
}
