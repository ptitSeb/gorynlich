/*
 * Copyright (C) 2011 Neil McGill
 *
 * See the LICENSE file for license.
 */

#include <SDL.h>

#include "main.h"
#include "thing.h"
#include "thing_timer.h"
#include "timer.h"
#include "wid.h"
#include "wid_game_map_client.h"
#include "wid_game_map_server.h"
#include "level.h"
#include "time_util.h"
#include "socket_util.h"

TREE_GET_NEXT_INLINE(tree_key_int32_compare_func)

static void thing_tick_server_all (void)
{
//    int count = 0;
    levelp level = server_level;
    if (!level) {
        return;
    }

    thingp t;
    TREE_WALK_INLINE(server_active_things, t,
                     tree_get_next_tree_key_int32_compare_func) {
        tpp tp;
        widp w;

        /*
         * Sanity checks.
         */
        thing_sanity(t);
        tp = thing_tp(t);

//    count++;
        w = t->wid;
        if (w) {
            verify(w);
        } else {
            ERR("thing %s has no widget", thing_logname(t));
            continue;
        }

        /*
         * Timer running on this thing? Like an explosion.
         */
        if (t->timers) {
            action_timers_tick(&t->timers);
        }

        /*
         * Thing has croaked it?
         */
        if (thing_is_dead(t)) {
            /*
             * Wait until the last server update has been sent before burying 
             * the thing.
             */
            if (!t->updated) {
                thing_destroy(t, "died");
            }
            continue;
        }

        /*
         * Thing is out of life?
         */
        if (tp_get_lifespan(tp)) {
            if (!t->timestamp_lifestamp) {
                /*
                 * When does this thing expire ?
                 */
                t->timestamp_lifestamp =
                        time_get_time_ms() +
                        tp_get_lifespan(tp);

                THING_LOG(t, "set end of life to %u", t->timestamp_lifestamp);

            } else if (time_get_time_ms() > t->timestamp_lifestamp) {
                thing_dead(t, 0, "out of life"); 
                continue;
            }
        }

        /*
         * If a projectile, move it by the delta
         */
        int need_collision_test = false;

        if (!wid_is_moving(w)) {
            /*
             * Only if it finished moving the last delta.
             */
            if ((t->dx != 0) || (t->dy != 0)) {
                /*
                 * Clean up missiles that have hit the edge and stopped 
                 * moving.
                 */
                if ((t->x <= 0) || 
                    (t->y <= 0) || 
                    (t->x >= MAP_WIDTH - 1) ||
                    (t->y >= MAP_HEIGHT - 1)) {
                    thing_dead(t, 0, "missile at edge of level"); 
                    continue;
                }

                need_collision_test = true;
            }
        }

        /*
         * Do expensive collision tests less often. But for weapons do them
         * all the time else you can have weapons speed through walls.
         */
        if (time_have_x_tenths_passed_since(DELAY_TENTHS_THING_COLLISION_TEST,
                                             t->timestamp_collision) ||
            need_collision_test) {

            thing_handle_collisions(wid_game_map_server_grid_container, t);

            t->timestamp_collision = time_get_time_ms() + (myrand() % 100);

            /*
             * Died in a collision ? 8( Handle it next time around.
             */
            if (thing_is_dead(t)) {
                continue;
            }
        } else {
            continue;
        }

        /*
         * Don't do stuff too often.
         */
        if (!time_have_x_tenths_passed_since(DELAY_TENTHS_THING_AI,
                                             t->timestamp_ai)) {
            continue;
        }

        if (!wid_is_moving(w)) {
            /*
             * Only if it finished moving the last delta.
             */
            if ((t->dx != 0) || (t->dy != 0)) {
                double fnexthop_x = t->x + t->dx;
                double fnexthop_y = t->y + t->dy;

                thing_server_move(t,
                        fnexthop_x,
                        fnexthop_y,
                        fnexthop_y < t->y,
                        fnexthop_y > t->y,
                        fnexthop_x < t->x,
                        fnexthop_x > t->x,
                        false);
            }
        }

        /*
         * If stopped moving, look for a next hop.
         */
        w = t->wid;

        /*
         * If waiting to update this thing to the client, like if it was newly 
         * born, then do not move it before the client gets a chance to find 
         * out.
         */
        if (!t->updated) {
            /*
             * Make things go faster if taking too long.
             */
            float speed = tp_get_speed(tp);

            /*
             * Look for a new hpp.
             */
            if (thing_is_monst(t) && speed && w && !wid_is_moving(w)) {
                int32_t nexthop_x = -1;
                int32_t nexthop_y = -1;

                if (thing_find_nexthop(t, &nexthop_x, &nexthop_y)) {
                    /*
                     * Add some jitter.
                     */
                    t->timestamp_ai = time_get_time_ms() + (myrand() % 100);
                }
            }
        }

        /*
         * Time to spawn a thing?
         */
        if (thing_is_mob_spawner(t)) {
            uint32_t delay = 
                    tp_get_mob_spawn_delay_tenths(tp);

            if (time_have_x_tenths_passed_since(delay,
                                                t->timestamp_mob_spawn)) {
                /*
                 * Not sure if should retry rapidly when we can't place.
                 */
                thing_mob_spawn(t);

                /*
                 * Add some jitter.
                 */
                t->timestamp_mob_spawn = time_get_time_ms() +
                                (myrand() % (delay * 100));
            }
        }
    }
//    LOG("server count %d",count);
}

void thing_tick_server_player_slow_all (int force)
{
    thingp t;

    TREE_OFFSET_WALK_UNSAFE(server_player_things, t) {

        /*
         * Sanity checks.
         */
        thing_sanity(t);

        /*
         * If something changed in the player that we need to update the 
         * server, do so now.
         */
        if (force || time_have_x_secs_passed_since(60, t->timestamp_torch)) {
            t->timestamp_torch = time_get_time_ms();

            /*
             * Use up one torch unit.
             */
            tpp tp = thing_is_carrying_thing(t, tp_is_torch);
            if (tp) {
                thing_used(t, tp);
                tp = thing_is_carrying_thing(t, tp_is_torch);
                if (!tp) {
                    MSG_SERVER_SHOUT_AT_PLAYER(INFO, t,
                                               "Your light fizzles out");
                }
            }
        }

        /*
         * If health went over the max, tick it down.
         */
        if (force || time_have_x_secs_passed_since(1, t->timestamp_health)) {
            /*
             * Start to croak it
             */
            if (thing_stats_get_hp(t) <= 0) {
                thing_stats_modify_hp(t, -1);

                thing_update(t);

                if (thing_stats_get_hp(t) <= THING_MIN_HEALTH) {
                    thing_dead(t, 0, 0);
                }
            }

            t->timestamp_health = time_get_time_ms();

            int delta = thing_stats_get_hp(t) - thing_stats_get_max_hp(t);
            if (delta > 0) {
                thing_stats_modify_hp(t, -delta / 10);
            }

            delta = thing_stats_get_magic(t) - thing_stats_get_max_magic(t);
            if (delta > 0) {
                thing_stats_modify_magic(t, -delta / 10);
            }

            /*
             * Work out the torch light radius. Each torch lights 0.5 radius 
             * units.
             */
            float torch_light_radius = 
                (double) thing_is_carrying_thing_count(t, tp_is_torch) / 2.0;
            if (torch_light_radius > 
                tp_get_light_radius(t->tp)) {
                torch_light_radius = tp_get_light_radius(t->tp);
            }

            if (torch_light_radius != t->torch_light_radius) {
                t->torch_light_radius = torch_light_radius;
                thing_update(t);
            }
        }
    }
}

static void thing_tick_client_all (void)
{
    thingp t;
    levelp level = client_level;
    if (!level) {
        return;
    }
//    int count = 0;

    TREE_WALK_INLINE(client_active_things, t,
                     tree_get_next_tree_key_int32_compare_func) {
        tpp tp;
//count++;
        widp w;

        /*
         * Sanity checks.
         */
        thing_sanity(t);
        tp = thing_tp(t);

        w = t->wid;
        if (w) {
            verify(w);
        }

        /*
         * Timer running on this thing? Like an explosion.
         */
        if (t->timers) {
            action_timers_tick(&t->timers);
        }

        /*
         * Thing has croaked it?
         */
        if (thing_is_dead(t)) {
            thing_destroy(t, "died");
            continue;
        }
//        LOG("  %s",thing_logname(t));

        /*
         * If on the map.
         */
        if (w) {
            /*
             * Animate before death checks so dead things can wriggle.
             *
             * Need to check to avoid for things that are popped off the map, 
             * like stars.
             */
            if (thing_is_animated(t)) {
                thing_animate(t);
            }
        }

        if (w) {
            switch (t->dir) {
            case THING_DIR_LEFT:
                if (tp_is_effect_rotate_2way(tp)) {
                    wid_rotate_immediate(w, 180);
                    wid_flip_vert(w, true);
                }
                break;
            case THING_DIR_RIGHT:
                if (tp_is_effect_rotate_2way(tp)) {
                    wid_rotate_immediate(w, 0);
                    wid_flip_vert(w, false);
                }
                break;
            case THING_DIR_UP:
                if (tp_is_effect_rotate_4way(tp)) {
                    wid_rotate_immediate(w, 270);
                }
                break;
            case THING_DIR_DOWN:
                if (tp_is_effect_rotate_4way(tp)) {
                    wid_rotate_immediate(w, 90);
                }
                break;
            case THING_DIR_TL:
                if (tp_is_effect_rotate_2way(tp)) {
                    wid_rotate_immediate(w, 180);
                    wid_flip_vert(w, true);
                }
                if (tp_is_effect_rotate_4way(tp)) {
                    wid_rotate_immediate(w, 270);
                }
                break;
            case THING_DIR_BL:
                if (tp_is_effect_rotate_2way(tp)) {
                    wid_rotate_immediate(w, 180);
                    wid_flip_vert(w, true);
                }
                if (tp_is_effect_rotate_4way(tp)) {
                    wid_rotate_immediate(w, 90);
                }
                break;
            case THING_DIR_TR:
                if (tp_is_effect_rotate_2way(tp)) {
                    wid_rotate_immediate(w, 0);
                    wid_flip_vert(w, false);
                }
                if (tp_is_effect_rotate_4way(tp)) {
                    wid_rotate_immediate(w, 270);
                }
                break;
            case THING_DIR_BR:
                if (tp_is_effect_rotate_2way(tp)) {
                    wid_rotate_immediate(w, 0);
                    wid_flip_vert(w, false);
                }
                if (tp_is_effect_rotate_4way(tp)) {
                    wid_rotate_immediate(w, 90);
                }
                break;
            }
        }
    }
//LOG("%d",count);
}

void thing_tick_all (void)
{
    /*
     * Do per tick stuff for the level
     */
    if (server_level) {
        level_tick(server_level);
    }

    /*
     * If the level is still around, check for AI?
     */
    if (server_level) {
        static uint32_t ts;

        if (time_have_x_tenths_passed_since(DELAY_TENTHS_THING_AI, ts)) {
            thing_generate_dmaps();

            ts = time_get_time_ms();
        }

        /*
         * No moving of monsters yet?
         */
        if (level_is_paused(server_level)) {
            return;
        }
    }

    if (player) {
        static uint32_t ts;

        if (time_have_x_thousandths_passed_since(
                            DELAY_THOUSANDTHS_PLAYER_POLL, ts)) {

            wid_game_map_client_player_move();

            wid_game_map_client_scroll_adjust(0);

            ts = time_get_time_ms();
        }
    }

#ifdef ENABLE_MAP_SANITY
    thing_map_sanity();
#endif

    /*
     * Any timers waiting to fire?
     */
    if (thing_timers) {
        action_timers_tick(&thing_timers);
    }

    thing_tick_server_all();

    /*
     * Slow tick.
     */
    thing_tick_server_player_slow_all(false /* force */);

    thing_tick_client_all();
}
