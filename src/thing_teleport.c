/*
 * Copyright (C) 2011 Neil McGill
 *
 * See the LICENSE file for license.
 */

#include "main.h"
#include "thing.h"
#include "thing_timer.h"
#include "wid_game_map_client.h"
#include "wid_game_map_server.h"
#include "map.h"
#include "level.h"
#include "time_util.h"
#include "string_util.h"
#include "sound.h"
#include "socket_util.h"
#include "client.h"
#include "timer.h"
#include "tile.h"
#include "wid_hiscore.h"
#include "wid_player_info.h"
#include "wid_player_inventory.h"
#include "wid_player_action.h"
#include "wid_choose_stats.h"
#include "math_util.h"

void thing_reached_teleport (thingp t, thingp teleport)
{
    int tx[MAP_WIDTH*MAP_HEIGHT];
    int ty[MAP_WIDTH*MAP_HEIGHT];
    int poss = 0;

    int x, y;

    if (!time_have_x_tenths_passed_since(10, t->timestamp_last_teleport)) {
        return;
    }

    for (x = 0; x < MAP_WIDTH; x++) {
        for (y = 0; y < MAP_HEIGHT; y++) {

            level_map_tile *tile = 
                &server_level->map_grid.tile[x][y][MAP_DEPTH_MONST_AND_OBJ];

            tpp it = tile->tp;
            if (!it) {
                continue;
            }

            if (!tp_is_teleport(it)) {
                continue;
            }

            if (DISTANCE(t->x, t->y, teleport->x, teleport->y) < 2.0) {
                continue;
            }

            const char *tcol = teleport->data->col_name;
            const char *col = tile->data.col_name;

            if (!col || !tcol) {
                tx[poss] = teleport->x;
                ty[poss] = teleport->y;
                poss++;
                continue;
            }

            if (!strcmp(col, tcol)) {
                tx[poss] = teleport->x;
                ty[poss] = teleport->y;
                poss++;
                continue;
            }
        }
    }

    if (!poss) {
        return;
    }

    poss = myrand() % poss;

    double nx = tx[poss];
    double ny = ty[poss];

    thing_server_wid_update(t, nx, ny, false /* is_new */);
    thing_update(t);

    thing_handle_collisions(wid_game_map_server_grid_container, t);

    sound_play_level_end();

    t->timestamp_last_teleport = time_get_time_ms();
}