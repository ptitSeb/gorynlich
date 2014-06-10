/*
 * Copyright (C) 2011 Neil McGill
 *
 * See the README file for license.
 */

#include <SDL.h>

#include "main.h"
#include "resource.h"
#include "tex.h"
#include "tile.h"
#include "init_fn.h"
#include "thing.h"

static uint8_t resource_init_1 (void *context)
{
    return (tex_load("data/gfx/gorynlich.png",
                     "gorynlich") != 0);
}

static uint8_t resource_init_2 (void *context)
{
    return (tex_load("data/gfx/title2.png",
                     "title2") != 0);
}

static uint8_t resource_init_3 (void *context)
{
    return (tex_load("data/gfx/title.png",
                     "title") != 0);
}

static uint8_t resource_init_4 (void *context)
{
    return (tex_load("data/gfx/help1.png",
                     "help1") != 0);
}

static uint8_t resource_init_5 (void *context)
{
    return (tex_load("data/gfx/help2.png",
                     "help2") != 0);
}

static uint8_t resource_init_6 (void *context)
{
    return (tex_load("data/gfx/help3.png",
                     "help3") != 0);
}

static uint8_t resource_init_7 (void *context)
{
    return (tex_load("data/gfx/dragon.png",
                     "dragon") != 0);
}

static uint8_t resource_init_8 (void *context)
{
    return (tex_load("data/gfx/title3.png",
                     "title3") != 0);
}

static uint8_t resource_init_9 (void *context)
{
    return (tex_load("data/gfx/title_small.png",
                     "title_small") != 0);
}

static uint8_t resource_init_10 (void *context)
{
    return (true);
}

static uint8_t resource_init_11 (void *context)
{
    return (true);
}

static uint8_t resource_init_12 (void *context)
{
    return (true);
}

static uint8_t resource_init_13 (void *context)
{
    return (true);
}

static uint8_t resource_init_14 (void *context)
{
    return (true);
}

static uint8_t resource_init_15 (void *context)
{
    return (true);
}

static uint8_t resource_init_16 (void *context)
{
    return (true);
}

static uint8_t resource_init_17 (void *context)
{
    return (true);
}

static uint8_t resource_init_18 (void *context)
{
    return (true);
}

static uint8_t resource_init_19 (void *context)
{
    return (true);
}

static uint8_t resource_init_20 (void *context)
{
    return (true);
}

static uint8_t resource_init_21 (void *context)
{
    return (tex_load_tiled("data/gfx/sprites_small.png",
                           "sprites_small",
                           TILE_WIDTH, TILE_HEIGHT) != 0);
}

static uint8_t resource_init_22 (void *context)
{
    return (true);
}

static uint8_t resource_init_23 (void *context)
{
    static const char *small_tiles[] = {
        // row 0 floor tiles
        "space",
        "player-collision-map",
        "monst-collision-map",
        "weapon-collision-map",
        "noentry",
        "apple_poison",
        "apple",
        "bread",
        "banana",
        "cheese",
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 1 items
        "key",
        "keys2",
        "keys3",
        "coins1",
        "chest1",
        "amulet1",
        "water",
        "water_poison",
        "spam",
        "potion_monsticide",
        "potion_fire",
        "potion_cloudkill",
        "potion_life",
        "potion_shield",
        "ring1",
        "ring2",
        "ring3",
        "gem1",
        "gem2",
        "gem3",
        "gem4",
        "gem5",
        "gem6",
        "gem7",
        "generator1",
        "generator4",
        "generator3",
        "generator2",
        "generator5",
        "generator6",
        "generator7",
        0,
        // row 2
        "wand-fire1",
        "wand-fire2",
        "wand-fire3",
        "wand-fire4",
        "bow2",
        "bow3",
        "bow1",
        "bow4",
        "sphere1",
        "sphere2",
        "sphere3",
        "sphere4",
        "arrow-up",
        "arrow-tr",
        "arrow-right",
        "arrow-br",
        "arrow-down",
        "arrow-bl",
        "arrow-left",
        "arrow-tl",
        0,
        0,
        0,
        0,
        "exit1.1",
        "exit2.1",
        "exit3.1",
        "exit4.1",
        "exit5.1",
        "exit6.1",
        "exit7.1",
        0,
        // row 3
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        "exit1.2",
        "exit2.2",
        "exit3.2",
        "exit4.2",
        "exit5.2",
        "exit6.2",
        "exit7.2",
        0,
        // row 4
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        "exit1.3",
        "exit2.3",
        "exit3.3",
        "exit4.3",
        "exit5.3",
        "exit6.3",
        "exit7.3",
        0,
        // row 5
        "plant1",
        "plant2",
        "plant3",
        "plant4",
        "plant5",
        "plant6",
        "plant7",
        "plant8",
        "plant9",
        "plant10",
        "plant11",
        "plant12",
        "seedpod1",
        "seedpod2",
        "seedpod3",
        "seedpod4",
        "seedpod5",
        "seedpod6",
        "seedpod7",
        "seedpod8",
        "seedpod9",
        "seedpod10",
        0,
        0,
        "exit1.4",
        "exit2.4",
        "exit3.4",
        "exit4.4",
        "exit5.4",
        "exit6.4",
        "exit7.4",
        0,
        // row 6
        "door_0_0",
        "door_0_is_join_node",
        "door_0_is_join_left",
        "door_0_is_join_bot",
        "door_0_is_join_right",
        "door_0_is_join_top",
        "door_0_is_join_horiz",
        "door_0_is_join_vert",
        "door_0_is_join_tl2",
        "door_0_is_join_bl2",
        "door_0_is_join_br2",
        "door_0_is_join_tr2",
        "door_0_is_join_tl",
        "door_0_is_join_bl",
        "door_0_is_join_br",
        "door_0_is_join_tr",
        "door_0_is_join_t270_3",
        "door_0_is_join_t180_3",
        "door_0_is_join_t90_3",
        "door_0_is_join_t_3",
        "door_0_is_join_t270",
        "door_0_is_join_t180",
        "door_0_is_join_t90",
        "door_0_is_join_t",
        "door_0_is_join_t270_2",
        "door_0_is_join_t180_2",
        "door_0_is_join_t90_2",
        "door_0_is_join_t_2",
        "door_0_is_join_t270_1",
        "door_0_is_join_t180_1",
        "door_0_is_join_t90_1",
        "door_0_is_join_t_1",
        // row 7
        "door_0_is_join_x",
        "door_0_is_join_x1",
        "door_0_is_join_x1_270",
        "door_0_is_join_x1_180",
        "door_0_is_join_x1_90",
        "door_0_is_join_x2",
        "door_0_is_join_x2_270",
        "door_0_is_join_x2_180",
        "door_0_is_join_x2_90",
        "door_0_is_join_x3",
        "door_0_is_join_x3_180",
        "door_0_is_join_x4",
        "door_0_is_join_x4_270",
        "door_0_is_join_x4_180",
        "door_0_is_join_x4_90",
        "door_0_is_join_vert2",
        "door_0_is_join_horiz2",
        "pipe-bot",
        "pipe-left",
        "pipe-bl",
        "pipe-top",
        "pipe-vert",
        "pipe-tl",
        "pipe-t270",
        "pipe-right",
        "pipe-br",
        "pipe-horiz",
        "pipe-t180",
        "pipe-tr",
        "pipe-t90",
        "pipe-t",
        "pipe-x",
        // row 8
        "wall_0_0",
        "wall_0_is_join_node",
        "wall_0_is_join_left",
        "wall_0_is_join_bot",
        "wall_0_is_join_right",
        "wall_0_is_join_top",
        "wall_0_is_join_horiz",
        "wall_0_is_join_vert",
        "wall_0_is_join_tl2",
        "wall_0_is_join_bl2",
        "wall_0_is_join_br2",
        "wall_0_is_join_tr2",
        "wall_0_is_join_tl",
        "wall_0_is_join_bl",
        "wall_0_is_join_br",
        "wall_0_is_join_tr",
        "wall_0_is_join_t270_3",
        "wall_0_is_join_t180_3",
        "wall_0_is_join_t90_3",
        "wall_0_is_join_t_3",
        "wall_0_is_join_t270",
        "wall_0_is_join_t180",
        "wall_0_is_join_t90",
        "wall_0_is_join_t",
        "wall_0_is_join_t270_2",
        "wall_0_is_join_t180_2",
        "wall_0_is_join_t90_2",
        "wall_0_is_join_t_2",
        "wall_0_is_join_t270_1",
        "wall_0_is_join_t180_1",
        "wall_0_is_join_t90_1",
        "wall_0_is_join_t_1",
        // row 9
        "wall_0_is_join_x",
        "wall_0_is_join_x1",
        "wall_0_is_join_x1_270",
        "wall_0_is_join_x1_180",
        "wall_0_is_join_x1_90",
        "wall_0_is_join_x2",
        "wall_0_is_join_x2_270",
        "wall_0_is_join_x2_180",
        "wall_0_is_join_x2_90",
        "wall_0_is_join_x3",
        "wall_0_is_join_x3_180",
        "wall_0_is_join_x4",
        "wall_0_is_join_x4_270",
        "wall_0_is_join_x4_180",
        "wall_0_is_join_x4_90",
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 10
        "floor1a",
        "floor1b",
        "floor1c",
        "floor1d",
        "floor1e",
        "floor1f",
        "floor2a",
        "floor2b",
        "floor2c",
        "floor2d",
        "floor2e",
        "floor2f",
        "floor3a",
        "floor3b",
        "floor3c",
        "floor3d",
        "floor3e",
        "floor3f",
        "floor4a",
        "floor4b",
        "floor4c",
        "floor4d",
        "floor4e",
        "floor5a",
        "floor5b",
        "floor5c",
        "floor6a",
        "floor6b",
        "floor6c",
        "floor6d",
        "floor6e",
        "floor6f",
        // row 11
        "wall2_0_0",
        "wall2_0_is_join_node",
        "wall2_0_is_join_left",
        "wall2_0_is_join_bot",
        "wall2_0_is_join_right",
        "wall2_0_is_join_top",
        "wall2_0_is_join_horiz",
        "wall2_0_is_join_vert",
        "wall2_0_is_join_tl2",
        "wall2_0_is_join_bl2",
        "wall2_0_is_join_br2",
        "wall2_0_is_join_tr2",
        "wall2_0_is_join_tl",
        "wall2_0_is_join_bl",
        "wall2_0_is_join_br",
        "wall2_0_is_join_tr",
        "wall2_0_is_join_t270_3",
        "wall2_0_is_join_t180_3",
        "wall2_0_is_join_t90_3",
        "wall2_0_is_join_t_3",
        "wall2_0_is_join_t270",
        "wall2_0_is_join_t180",
        "wall2_0_is_join_t90",
        "wall2_0_is_join_t",
        "wall2_0_is_join_t270_2",
        "wall2_0_is_join_t180_2",
        "wall2_0_is_join_t90_2",
        "wall2_0_is_join_t_2",
        "wall2_0_is_join_t270_1",
        "wall2_0_is_join_t180_1",
        "wall2_0_is_join_t90_1",
        "wall2_0_is_join_t_1",
        // row 12
        "wall2_0_is_join_x",
        "wall2_0_is_join_x1",
        "wall2_0_is_join_x1_270",
        "wall2_0_is_join_x1_180",
        "wall2_0_is_join_x1_90",
        "wall2_0_is_join_x2",
        "wall2_0_is_join_x2_270",
        "wall2_0_is_join_x2_180",
        "wall2_0_is_join_x2_90",
        "wall2_0_is_join_x3",
        "wall2_0_is_join_x3_180",
        "wall2_0_is_join_x4",
        "wall2_0_is_join_x4_270",
        "wall2_0_is_join_x4_180",
        "wall2_0_is_join_x4_90",
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 13
        "wall3_0_0",
        "wall3_0_is_join_node",
        "wall3_0_is_join_left",
        "wall3_0_is_join_bot",
        "wall3_0_is_join_right",
        "wall3_0_is_join_top",
        "wall3_0_is_join_horiz",
        "wall3_0_is_join_vert",
        "wall3_0_is_join_tl2",
        "wall3_0_is_join_bl2",
        "wall3_0_is_join_br2",
        "wall3_0_is_join_tr2",
        "wall3_0_is_join_tl",
        "wall3_0_is_join_bl",
        "wall3_0_is_join_br",
        "wall3_0_is_join_tr",
        "wall3_0_is_join_t270_3",
        "wall3_0_is_join_t180_3",
        "wall3_0_is_join_t90_3",
        "wall3_0_is_join_t_3",
        "wall3_0_is_join_t270",
        "wall3_0_is_join_t180",
        "wall3_0_is_join_t90",
        "wall3_0_is_join_t",
        "wall3_0_is_join_t270_2",
        "wall3_0_is_join_t180_2",
        "wall3_0_is_join_t90_2",
        "wall3_0_is_join_t_2",
        "wall3_0_is_join_t270_1",
        "wall3_0_is_join_t180_1",
        "wall3_0_is_join_t90_1",
        "wall3_0_is_join_t_1",
        // row 14
        "wall3_0_is_join_x",
        "wall3_0_is_join_x1",
        "wall3_0_is_join_x1_270",
        "wall3_0_is_join_x1_180",
        "wall3_0_is_join_x1_90",
        "wall3_0_is_join_x2",
        "wall3_0_is_join_x2_270",
        "wall3_0_is_join_x2_180",
        "wall3_0_is_join_x2_90",
        "wall3_0_is_join_x3",
        "wall3_0_is_join_x3_180",
        "wall3_0_is_join_x4",
        "wall3_0_is_join_x4_270",
        "wall3_0_is_join_x4_180",
        "wall3_0_is_join_x4_90",
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 15
        "wall4_0_0",
        "wall4_0_is_join_node",
        "wall4_0_is_join_left",
        "wall4_0_is_join_bot",
        "wall4_0_is_join_right",
        "wall4_0_is_join_top",
        "wall4_0_is_join_horiz",
        "wall4_0_is_join_vert",
        "wall4_0_is_join_tl2",
        "wall4_0_is_join_bl2",
        "wall4_0_is_join_br2",
        "wall4_0_is_join_tr2",
        "wall4_0_is_join_tl",
        "wall4_0_is_join_bl",
        "wall4_0_is_join_br",
        "wall4_0_is_join_tr",
        "wall4_0_is_join_t270_3",
        "wall4_0_is_join_t180_3",
        "wall4_0_is_join_t90_3",
        "wall4_0_is_join_t_3",
        "wall4_0_is_join_t270",
        "wall4_0_is_join_t180",
        "wall4_0_is_join_t90",
        "wall4_0_is_join_t",
        "wall4_0_is_join_t270_2",
        "wall4_0_is_join_t180_2",
        "wall4_0_is_join_t90_2",
        "wall4_0_is_join_t_2",
        "wall4_0_is_join_t270_1",
        "wall4_0_is_join_t180_1",
        "wall4_0_is_join_t90_1",
        "wall4_0_is_join_t_1",
        // row 16
        "wall4_0_is_join_x",
        "wall4_0_is_join_x1",
        "wall4_0_is_join_x1_270",
        "wall4_0_is_join_x1_180",
        "wall4_0_is_join_x1_90",
        "wall4_0_is_join_x2",
        "wall4_0_is_join_x2_270",
        "wall4_0_is_join_x2_180",
        "wall4_0_is_join_x2_90",
        "wall4_0_is_join_x3",
        "wall4_0_is_join_x3_180",
        "wall4_0_is_join_x4",
        "wall4_0_is_join_x4_270",
        "wall4_0_is_join_x4_180",
        "wall4_0_is_join_x4_90",
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 17
        "wall5_0_0",
        "wall5_0_is_join_node",
        "wall5_0_is_join_left",
        "wall5_0_is_join_bot",
        "wall5_0_is_join_right",
        "wall5_0_is_join_top",
        "wall5_0_is_join_horiz",
        "wall5_0_is_join_vert",
        "wall5_0_is_join_tl2",
        "wall5_0_is_join_bl2",
        "wall5_0_is_join_br2",
        "wall5_0_is_join_tr2",
        "wall5_0_is_join_tl",
        "wall5_0_is_join_bl",
        "wall5_0_is_join_br",
        "wall5_0_is_join_tr",
        "wall5_0_is_join_t270_3",
        "wall5_0_is_join_t180_3",
        "wall5_0_is_join_t90_3",
        "wall5_0_is_join_t_3",
        "wall5_0_is_join_t270",
        "wall5_0_is_join_t180",
        "wall5_0_is_join_t90",
        "wall5_0_is_join_t",
        "wall5_0_is_join_t270_2",
        "wall5_0_is_join_t180_2",
        "wall5_0_is_join_t90_2",
        "wall5_0_is_join_t_2",
        "wall5_0_is_join_t270_1",
        "wall5_0_is_join_t180_1",
        "wall5_0_is_join_t90_1",
        "wall5_0_is_join_t_1",
        // row 18
        "wall5_0_is_join_x",
        "wall5_0_is_join_x1",
        "wall5_0_is_join_x1_270",
        "wall5_0_is_join_x1_180",
        "wall5_0_is_join_x1_90",
        "wall5_0_is_join_x2",
        "wall5_0_is_join_x2_270",
        "wall5_0_is_join_x2_180",
        "wall5_0_is_join_x2_90",
        "wall5_0_is_join_x3",
        "wall5_0_is_join_x3_180",
        "wall5_0_is_join_x4",
        "wall5_0_is_join_x4_270",
        "wall5_0_is_join_x4_180",
        "wall5_0_is_join_x4_90",
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 19
        "fireball1a-tr",
        "fireball1a-right",
        "fireball1a-br",
        "fireball1a-down",
        "fireball1a-bl",
        "fireball1a-left",
        "fireball1a-tl",
        "fireball1a-up",
        "fireball1b-tr",
        "fireball1b-right",
        "fireball1b-br",
        "fireball1b-down",
        "fireball1b-bl",
        "fireball1b-left",
        "fireball1b-tl",
        "fireball1b-up",
        "fireball1c-tr",
        "fireball1c-right",
        "fireball1c-br",
        "fireball1c-down",
        "fireball1c-bl",
        "fireball1c-left",
        "fireball1c-tl",
        "fireball1c-up",
        "fireball1d-tr",
        "fireball1d-right",
        "fireball1d-br",
        "fireball1d-down",
        "fireball1d-bl",
        "fireball1d-left",
        "fireball1d-tl",
        "fireball1d-up",

        // row 20
        
        "ghost1a-right",
        "ghost1a-br",
        "ghost1a-down",
        "ghost1a-bl",
        "ghost1a-left",
        "ghost1a-tl",
        "ghost1a-up",
        "ghost1a-tr",

        "ghost1b-right",
        "ghost1b-br",
        "ghost1b-down",
        "ghost1b-bl",
        "ghost1b-left",
        "ghost1b-tl",
        "ghost1b-up",
        "ghost1b-tr",

        "ghost1c-right",
        "ghost1c-br",
        "ghost1c-down",
        "ghost1c-bl",
        "ghost1c-left",
        "ghost1c-tl",
        "ghost1c-up",
        "ghost1c-tr",

        "ghost1d-right",
        "ghost1d-br",
        "ghost1d-down",
        "ghost1d-bl",
        "ghost1d-left",
        "ghost1d-tl",
        "ghost1d-up",
        "ghost1d-tr",

        // row 21
        
        "ghost2a-right",
        "ghost2a-br",
        "ghost2a-down",
        "ghost2a-bl",
        "ghost2a-left",
        "ghost2a-tl",
        "ghost2a-up",
        "ghost2a-tr",

        "ghost2b-right",
        "ghost2b-br",
        "ghost2b-down",
        "ghost2b-bl",
        "ghost2b-left",
        "ghost2b-tl",
        "ghost2b-up",
        "ghost2b-tr",

        "ghost2c-right",
        "ghost2c-br",
        "ghost2c-down",
        "ghost2c-bl",
        "ghost2c-left",
        "ghost2c-tl",
        "ghost2c-up",
        "ghost2c-tr",

        "ghost2d-right",
        "ghost2d-br",
        "ghost2d-down",
        "ghost2d-bl",
        "ghost2d-left",
        "ghost2d-tl",
        "ghost2d-up",
        "ghost2d-tr",

        // row 22
        "ghost3a-right",
        "ghost3a-br",
        "ghost3a-down",
        "ghost3a-bl",
        "ghost3a-left",
        "ghost3a-tl",
        "ghost3a-up",
        "ghost3a-tr",

        "ghost3b-right",
        "ghost3b-br",
        "ghost3b-down",
        "ghost3b-bl",
        "ghost3b-left",
        "ghost3b-tl",
        "ghost3b-up",
        "ghost3b-tr",

        "ghost3c-right",
        "ghost3c-br",
        "ghost3c-down",
        "ghost3c-bl",
        "ghost3c-left",
        "ghost3c-tl",
        "ghost3c-up",
        "ghost3c-tr",

        "ghost3d-right",
        "ghost3d-br",
        "ghost3d-down",
        "ghost3d-bl",
        "ghost3d-left",
        "ghost3d-tl",
        "ghost3d-up",
        "ghost3d-tr",

        // row 23
        "monk1-right",
        "monk1-br",
        "monk1-down",
        "monk1-bl",
        "monk1-left",
        "monk1-tl",
        "monk1-up",
        "monk1-tr",
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 24
        "demon1-right",
        "demon1-br",
        "demon1-down",
        "demon1-bl",
        "demon1-left",
        "demon1-tl",
        "demon1-up",
        "demon1-tr",
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 25
        "lizard1-right",
        "lizard1-br",
        "lizard1-down",
        "lizard1-bl",
        "lizard1-left",
        "lizard1-tl",
        "lizard1-up",
        "lizard1-tr",
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 26
        "warrior-right",
        "warrior-br",
        "warrior-down",
        "warrior-bl",
        "warrior-left",
        "warrior-tl",
        "warrior-up",
        "warrior-tr",
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 27
        "valkyrie-right",
        "valkyrie-br",
        "valkyrie-down",
        "valkyrie-bl",
        "valkyrie-left",
        "valkyrie-tl",
        "valkyrie-up",
        "valkyrie-tr",
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 28
        "death1-right",
        "death1-br",
        "death1-down",
        "death1-bl",
        "death1-left",
        "death1-tl",
        "death1-up",
        "death1-tr",
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 29
        "wizard-right",
        "wizard-br",
        "wizard-down",
        "wizard-bl",
        "wizard-left",
        "wizard-tl",
        "wizard-up",
        "wizard-tr",
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 30
        "elf-right",
        "elf-br",
        "elf-down",
        "elf-bl",
        "elf-left",
        "elf-tl",
        "elf-up",
        "elf-tr",
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 31
        "dwarf-right",
        "dwarf-br",
        "dwarf-down",
        "dwarf-bl",
        "dwarf-left",
        "dwarf-tl",
        "dwarf-up",
        "dwarf-tr",
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 32
        "explosion1.1",
        "explosion2.1",
        "explosion3.1",
        "explosion4.1",
        "explosion5.1",
        "explosion6.1",
        "explosion7.1",
        "explosion8.1",
        "magic1.1",
        "magic2.1",
        "poison1.1",
        "poison2.1",
        "poison3.1",
        "poison4.1",
        "poison5.1",
        "poison6.1",
        "poison7.1",
        "poison8.1",
        "cloudkill1.1",
        "cloudkill2.1",
        "cloudkill3.1",
        "cloudkill4.1",
        "cloudkill5.1",
        "cloudkill6.1",
        "cloudkill7.1",
        "cloudkill8.1",
        0,
        0,
        0,
        0,
        0,
        0,
        // row 33
        "explosion1.2",
        "explosion2.2",
        "explosion3.2",
        "explosion4.2",
        "explosion5.2",
        "explosion6.2",
        "explosion7.2",
        "explosion8.2",
        "magic1.2",
        "magic2.2",
        "poison1.2",
        "poison2.2",
        "poison3.2",
        "poison4.2",
        "poison5.2",
        "poison6.2",
        "poison7.2",
        "poison8.2",
        "cloudkill1.2",
        "cloudkill2.2",
        "cloudkill3.2",
        "cloudkill4.2",
        "cloudkill5.2",
        "cloudkill6.2",
        "cloudkill7.2",
        "cloudkill8.2",
        0,
        0,
        0,
        0,
        0,
        0,
        // row 34
        "explosion1.3",
        "explosion2.3",
        "explosion3.3",
        "explosion4.3",
        "explosion5.3",
        "explosion6.3",
        "explosion7.3",
        "explosion8.3",
        "magic1.3",
        "magic2.3",
        "poison1.3",
        "poison2.3",
        "poison3.3",
        "poison4.3",
        "poison5.3",
        "poison6.3",
        "poison7.3",
        "poison8.3",
        "cloudkill1.3",
        "cloudkill2.3",
        "cloudkill3.3",
        "cloudkill4.3",
        "cloudkill5.3",
        "cloudkill6.3",
        "cloudkill7.3",
        "cloudkill8.3",
        0,
        0,
        0,
        0,
        0,
        0,
        // row 35
        "explosion1.4",
        "explosion2.4",
        "explosion3.4",
        "explosion4.4",
        "explosion5.4",
        "explosion6.4",
        "explosion7.4",
        "explosion8.4",
        "magic1.4",
        "magic2.4",
        "poison1.4",
        "poison2.4",
        "poison3.4",
        "poison4.4",
        "poison5.4",
        "poison6.4",
        "poison7.4",
        "poison8.4",
        "cloudkill1.4",
        "cloudkill2.4",
        "cloudkill3.4",
        "cloudkill4.4",
        "cloudkill5.4",
        "cloudkill6.4",
        "cloudkill7.4",
        "cloudkill8.4",
        0,
        0,
        0,
        0,
        0,
        0,
        // row 36
        "explosion1.5",
        "explosion2.5",
        "explosion3.5",
        "explosion4.5",
        "explosion5.5",
        "explosion6.5",
        "explosion7.5",
        "explosion8.5",
        "magic1.5",
        "magic2.5",
        "poison1.5",
        "poison2.5",
        "poison3.5",
        "poison4.5",
        "poison5.5",
        "poison6.5",
        "poison7.5",
        "poison8.5",
        "cloudkill1.5",
        "cloudkill2.5",
        "cloudkill3.5",
        "cloudkill4.5",
        "cloudkill5.5",
        "cloudkill6.5",
        "cloudkill7.5",
        "cloudkill8.5",
        0,
        0,
        0,
        0,
        0,
        0,
        // row 37
        "explosion1.6",
        "explosion2.6",
        "explosion3.6",
        "explosion4.6",
        "explosion5.6",
        "explosion6.6",
        "explosion7.6",
        "explosion8.6",
        "magic1.6",
        "magic2.6",
        "poison1.6",
        "poison2.6",
        "poison3.6",
        "poison4.6",
        "poison5.6",
        "poison6.6",
        "poison7.6",
        "poison8.6",
        "cloudkill1.6",
        "cloudkill2.6",
        "cloudkill3.6",
        "cloudkill4.6",
        "cloudkill5.6",
        "cloudkill6.6",
        "cloudkill7.6",
        "cloudkill8.6",
        0,
        0,
        0,
        0,
        0,
        0,
        // row 38
        "explosion1.7",
        "explosion2.7",
        "explosion3.7",
        "explosion4.7",
        "explosion5.7",
        "explosion6.7",
        "explosion7.7",
        "explosion8.7",
        "magic1.7",
        "magic2.7",
        "poison1.7",
        "poison2.7",
        "poison3.7",
        "poison4.7",
        "poison5.7",
        "poison6.7",
        "poison7.7",
        "poison8.7",
        "cloudkill1.7",
        "cloudkill2.7",
        "cloudkill3.7",
        "cloudkill4.7",
        "cloudkill5.7",
        "cloudkill6.7",
        "cloudkill7.7",
        "cloudkill8.7",
        0,
        0,
        0,
        0,
        0,
        0,
    };

    tile_load_arr("sprites_small", TILE_WIDTH, TILE_HEIGHT,
                  ARRAY_SIZE(small_tiles), small_tiles);

    /*
     * Walls
     */
    thing_template_load(&THING_WALL, "data/things/wall");
    thing_template_load(&THING_WALL2, "data/things/wall2");
    thing_template_load(&THING_WALL3, "data/things/wall3");
    thing_template_load(&THING_WALL4, "data/things/wall4");
    thing_template_load(&THING_WALL5, "data/things/wall5");
    thing_template_load(&THING_FLOOR, "data/things/floor");
    thing_template_load(&THING_FLOOR2, "data/things/floor2");
    thing_template_load(&THING_FLOOR3, "data/things/floor3");
    thing_template_load(&THING_FLOOR4, "data/things/floor4");
    thing_template_load(&THING_FLOOR5, "data/things/floor5");
    thing_template_load(&THING_FLOOR6, "data/things/floor6");
    thing_template_load(&THING_DOOR, "data/things/door");
    thing_template_load(&THING_NOENTRY, "data/things/noentry");
    thing_template_load(&THING_PIPE, "data/things/pipe");
    thing_template_load(&THING_EXIT1, "data/things/exit1");
    thing_template_load(&THING_EXIT2, "data/things/exit2");
    thing_template_load(&THING_EXIT3, "data/things/exit3");
    thing_template_load(&THING_EXIT4, "data/things/exit4");
    thing_template_load(&THING_EXIT5, "data/things/exit5");
    thing_template_load(&THING_EXIT6, "data/things/exit6");
    thing_template_load(&THING_EXIT7, "data/things/exit7");
    thing_template_load(&THING_GENERATOR1, "data/things/generator1");
    thing_template_load(&THING_GENERATOR2, "data/things/generator2");
    thing_template_load(&THING_GENERATOR3, "data/things/generator3");
    thing_template_load(&THING_GENERATOR4, "data/things/generator4");
    thing_template_load(&THING_GENERATOR5, "data/things/generator5");
    thing_template_load(&THING_GENERATOR6, "data/things/generator6");
    thing_template_load(&THING_GENERATOR7, "data/things/generator7");

    /*
     * Projectiles
     */
    thing_template_load(&THING_ARROW, "data/things/arrow");
    thing_template_load(&THING_FIREBALL, "data/things/fireball");

    /*
     * Effects
     */
    thing_template_load(&THING_EXPLOSION1, "data/things/explosion1");
    thing_template_load(&THING_EXPLOSION2, "data/things/explosion2");
    thing_template_load(&THING_EXPLOSION3, "data/things/explosion3");
    thing_template_load(&THING_EXPLOSION4, "data/things/explosion4");
    thing_template_load(&THING_EXPLOSION5, "data/things/explosion5");
    thing_template_load(&THING_EXPLOSION6, "data/things/explosion6");
    thing_template_load(&THING_EXPLOSION7, "data/things/explosion7");
    thing_template_load(&THING_EXPLOSION8, "data/things/explosion8");

    thing_template_load(&THING_POISON1, "data/things/poison1");
    thing_template_load(&THING_POISON2, "data/things/poison2");
    thing_template_load(&THING_POISON3, "data/things/poison3");
    thing_template_load(&THING_POISON4, "data/things/poison4");
    thing_template_load(&THING_POISON5, "data/things/poison5");
    thing_template_load(&THING_POISON6, "data/things/poison6");
    thing_template_load(&THING_POISON7, "data/things/poison7");
    thing_template_load(&THING_POISON8, "data/things/poison8");

    thing_template_load(&THING_CLOUDKILL1, "data/things/cloudkill1");
    thing_template_load(&THING_CLOUDKILL2, "data/things/cloudkill2");
    thing_template_load(&THING_CLOUDKILL3, "data/things/cloudkill3");
    thing_template_load(&THING_CLOUDKILL4, "data/things/cloudkill4");
    thing_template_load(&THING_CLOUDKILL5, "data/things/cloudkill5");
    thing_template_load(&THING_CLOUDKILL6, "data/things/cloudkill6");
    thing_template_load(&THING_CLOUDKILL7, "data/things/cloudkill7");
    thing_template_load(&THING_CLOUDKILL8, "data/things/cloudkill8");

    /*
     * Important stuff that cannot be used by clicking on.
     */
    thing_template_load(&THING_KEY, "data/things/key");
    thing_template_load(&THING_KEYS2, "data/things/keys2");
    thing_template_load(&THING_KEYS3, "data/things/keys3");

    /*
     * Wearable items that are used as weapons. Shown first on list of player 
     * items.
     */
    thing_template_load(&THING_WAND_FIRE, "data/things/wand_fire");
    thing_template_load(&THING_BOW1, "data/things/bow1");
    thing_template_load(&THING_BOW2, "data/things/bow2");
    thing_template_load(&THING_BOW3, "data/things/bow3");
    thing_template_load(&THING_BOW4, "data/things/bow4");
    thing_template_load(&THING_AMULET1, "data/things/amulet1");

    /*
     * Lesser items like food.
     */
    thing_template_load(&THING_APPLE, 
                        "data/things/apple");
    thing_template_load(&THING_APPLE_POISON, 
                        "data/things/apple_poison");
    thing_template_load(&THING_BREAD, 
                        "data/things/bread");
    thing_template_load(&THING_CHEESE, 
                        "data/things/cheese");
    thing_template_load(&THING_BANANA, 
                        "data/things/banana");

    thing_template_load(&THING_POTION_MONSTICIDE, 
                        "data/things/potion_monsticide");
    thing_template_load(&THING_POTION_FIRE, 
                        "data/things/potion_fire");
    thing_template_load(&THING_POTION_CLOUDKILL, 
                        "data/things/potion_cloudkill");
    thing_template_load(&THING_POTION_LIFE, 
                        "data/things/potion_life");
    thing_template_load(&THING_POTION_SHIELD, 
                        "data/things/potion_shield");
    thing_template_load(&THING_WATER, 
                        "data/things/water");
    thing_template_load(&THING_WATER_POISON, 
                        "data/things/water_poison");

    /*
     * Lowest priority junk
     */
    thing_template_load(&THING_MASK1, "data/things/ring1");
    thing_template_load(&THING_RING2, "data/things/ring2");
    thing_template_load(&THING_RING3, "data/things/ring3");
    thing_template_load(&THING_GEM1, "data/things/gem1");
    thing_template_load(&THING_GEM2, "data/things/gem2");
    thing_template_load(&THING_GEM3, "data/things/gem3");
    thing_template_load(&THING_GEM4, "data/things/gem4");
    thing_template_load(&THING_GEM5, "data/things/gem5");
    thing_template_load(&THING_GEM6, "data/things/gem6");
    thing_template_load(&THING_GEM7, "data/things/gem7");
    thing_template_load(&THING_COINS1, "data/things/coins1");
    thing_template_load(&THING_CHEST1, "data/things/chest1");
    thing_template_load(&THING_SPAM, "data/things/spam");

    /*
     * Heroes. Must come after items they can carry.
     */
    thing_template_load(&THING_WARRIOR, "data/things/warrior");
    thing_template_load(&THING_VALKYRIE, "data/things/valkyrie");
    thing_template_load(&THING_WIZARD, "data/things/wizard");
    thing_template_load(&THING_ELF, "data/things/elf");
    thing_template_load(&THING_DWARF, "data/things/dwarf");

    /*
     * Monsters
     */
    thing_template_load(&THING_GHOST1, "data/things/ghost1");
    thing_template_load(&THING_GHOST2, "data/things/ghost2");
    thing_template_load(&THING_GHOST3, "data/things/ghost3");
    thing_template_load(&THING_DEMON, "data/things/demon");
    thing_template_load(&THING_MONK, "data/things/monk");
    thing_template_load(&THING_LIZARD, "data/things/lizard");
    thing_template_load(&THING_DEATH, "data/things/death");
    thing_template_load(&THING_PLANT, "data/things/plant");
    thing_template_load(&THING_SEEDPOD, "data/things/seedpod");

    return (true);
}

uint8_t resource_init (void)
{
    action_init_fn_create(&init_fns,
                          (action_init_fn_callback)resource_init_1,
                          0, "resource_init_1");
    action_init_fn_create(&init_fns,
                          (action_init_fn_callback)resource_init_2,
                          0, "resource_init_2");
    action_init_fn_create(&init_fns,
                          (action_init_fn_callback)resource_init_3,
                          0, "resource_init_3");
    action_init_fn_create(&init_fns,
                          (action_init_fn_callback)resource_init_4,
                          0, "resource_init_4");
    action_init_fn_create(&init_fns,
                          (action_init_fn_callback)resource_init_5,
                          0, "resource_init_5");
    action_init_fn_create(&init_fns,
                          (action_init_fn_callback)resource_init_6,
                          0, "resource_init_6");
    action_init_fn_create(&init_fns,
                          (action_init_fn_callback)resource_init_7,
                          0, "resource_init_7");
    action_init_fn_create(&init_fns,
                          (action_init_fn_callback)resource_init_8,
                          0, "resource_init_8");
    action_init_fn_create(&init_fns,
                          (action_init_fn_callback)resource_init_9,
                          0, "resource_init_9");
    action_init_fn_create(&init_fns,
                          (action_init_fn_callback)resource_init_10,
                          0, "resource_init_10");
    action_init_fn_create(&init_fns,
                          (action_init_fn_callback)resource_init_11,
                          0, "resource_init_11");
    action_init_fn_create(&init_fns,
                          (action_init_fn_callback)resource_init_12,
                          0, "resource_init_12");
    action_init_fn_create(&init_fns,
                          (action_init_fn_callback)resource_init_13,
                          0, "resource_init_13");
    action_init_fn_create(&init_fns,
                          (action_init_fn_callback)resource_init_14,
                          0, "resource_init_14");
    action_init_fn_create(&init_fns,
                          (action_init_fn_callback)resource_init_15,
                          0, "resource_init_15");
    action_init_fn_create(&init_fns,
                          (action_init_fn_callback)resource_init_16,
                          0, "resource_init_16");
    action_init_fn_create(&init_fns,
                          (action_init_fn_callback)resource_init_17,
                          0, "resource_init_17");
    action_init_fn_create(&init_fns,
                          (action_init_fn_callback)resource_init_18,
                          0, "resource_init_18");
    action_init_fn_create(&init_fns,
                          (action_init_fn_callback)resource_init_19,
                          0, "resource_init_19");
    action_init_fn_create(&init_fns,
                          (action_init_fn_callback)resource_init_20,
                          0, "resource_init_20");
    action_init_fn_create(&init_fns,
                          (action_init_fn_callback)resource_init_21,
                          0, "resource_init_21");
    action_init_fn_create(&init_fns,
                          (action_init_fn_callback)resource_init_22,
                          0, "resource_init_22");
    action_init_fn_create(&init_fns,
                          (action_init_fn_callback)resource_init_23,
                          0, "resource_init_23");

    return (true);
}
