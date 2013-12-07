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
#include "thing_template.h"
#include "init_fn.h"

static boolean resource_init_1 (void *context)
{
    return (tex_load("data/gfx/gorynlich.png",
                     "gorynlich") != 0);
}

static boolean resource_init_2 (void *context)
{
    return (true);
}

static boolean resource_init_3 (void *context)
{
    return (tex_load("data/gfx/title.png",
                     "title") != 0);
}

static boolean resource_init_4 (void *context)
{
    return (tex_load("data/gfx/help1.png",
                     "help1") != 0);
}

static boolean resource_init_5 (void *context)
{
    return (tex_load("data/gfx/help2.png",
                     "help2") != 0);
}

static boolean resource_init_6 (void *context)
{
    return (tex_load("data/gfx/help3.png",
                     "help3") != 0);
}

static boolean resource_init_7 (void *context)
{
    return (true);
}

static boolean resource_init_8 (void *context)
{
    return (true);
}

static boolean resource_init_9 (void *context)
{
    return (true);
}

static boolean resource_init_10 (void *context)
{
    return (true);
}

static boolean resource_init_11 (void *context)
{
    return (true);
}

static boolean resource_init_12 (void *context)
{
    return (true);
}

static boolean resource_init_13 (void *context)
{
    return (true);
}

static boolean resource_init_14 (void *context)
{
    return (true);
}

static boolean resource_init_15 (void *context)
{
    return (true);
}

static boolean resource_init_16 (void *context)
{
    return (true);
}

static boolean resource_init_17 (void *context)
{
    return (true);
}

static boolean resource_init_18 (void *context)
{
    return (true);
}

static boolean resource_init_19 (void *context)
{
    return (true);
}

static boolean resource_init_20 (void *context)
{
    return (true);
}

static boolean resource_init_21 (void *context)
{
    return (tex_load_tiled("data/gfx/sprites_small.png",
                           "sprites_small",
                           TILE_WIDTH, TILE_HEIGHT) != 0);
}

static boolean resource_init_22 (void *context)
{
    return (tex_load("data/gfx/stars.png",
                     "stars") != 0);
}

static boolean resource_init_23 (void *context)
{
    static const char *small_tiles[] = {
        // row 0 floor tiles
        "space",
        0,
        0,
        0,
        "noentry",
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
        0,
        0,
        0,
        // row 1 items
        "keys1",
        "keys2",
        "keys3",
        "coins1",
        "chest1",
        "amulet1",
        "water1",
        "water2",
        "spam",
        "potion1",
        "potion2",
        "potion3",
        "potion4",
        "potion5",
        "mask1",
        "mask2",
        "mask3",
        "gem1",
        "gem2",
        "gem3",
        "gem4",
        "gem5",
        "gem6",
        "gem7",
        "generator1",
        "generator2",
        "generator3",
        "generator4",
        "generator5",
        "generator6",
        "generator7",
        0,
        // row 2
        "fireball1",
        "fireball2",
        "fireball3",
        "fireball4",
        "fireball5",
        "fireball6",
        "fireball7",
        "fireball8",
        "sphere1",
        "sphere2",
        "sphere3",
        "sphere4",
        "arrow1",
        "arrow2",
        "arrow3",
        "arrow4",
        "arrow5",
        "arrow6",
        "arrow7",
        "arrow8",
        "food1",
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
        // row 3
        "bomb1",
        "bomb2",
        "bomb3",
        "bomb4",
        "bomb5",
        "bomb6",
        "bomb7",
        "bomb8",
        "bomb9",
        "pipe-node",
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
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 4
        "explosion1",
        "explosion2",
        "explosion3",
        "explosion4",
        "explosion5",
        "explosion6",
        "explosion7",
        "explosion8",
        "explosion9",
        "explosion10",
        "explosion11",
        "explosion12",
        "explosion13",
        "explosion14",
        "explosion15",
        "explosion16",
        "explosion17",
        "explosion18",
        "explosion19",
        "explosion20",
        "explosion21",
        "explosion22",
        "explosion23",
        "explosion24",
        "explosion25",
        0,
        0,
        0,
        0,
        0,
        0,
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
        0,
        0,
        0,
        0,
        0,
        0,
        0,
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
        "floor4f",
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
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
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 14
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
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 15
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
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 16
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
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 17
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
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 18
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
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 19
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
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 20
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
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 21
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
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        // row 22
        "ghost1-right",
        "ghost1-br",
        "ghost1-down",
        "ghost1-bl",
        "ghost1-left",
        "ghost1-tl",
        "ghost1-up",
        "ghost1-tr",
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
        "warrior1-right",
        "warrior1-br",
        "warrior1-down",
        "warrior1-bl",
        "warrior1-left",
        "warrior1-tl",
        "warrior1-up",
        "warrior1-tr",
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
        "valkyrie1-right",
        "valkyrie1-br",
        "valkyrie1-down",
        "valkyrie1-bl",
        "valkyrie1-left",
        "valkyrie1-tl",
        "valkyrie1-up",
        "valkyrie1-tr",
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
        "wizard1-right",
        "wizard1-br",
        "wizard1-down",
        "wizard1-bl",
        "wizard1-left",
        "wizard1-tl",
        "wizard1-up",
        "wizard1-tr",
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
        "elve1-right",
        "elve1-br",
        "elve1-down",
        "elve1-bl",
        "elve1-left",
        "elve1-tl",
        "elve1-up",
        "elve1-tr",
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
        "dwarve1-right",
        "dwarve1-br",
        "dwarve1-down",
        "dwarve1-bl",
        "dwarve1-left",
        "dwarve1-tl",
        "dwarve1-up",
        "dwarve1-tr",
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
    };

    tile_load_arr("sprites_small", TILE_WIDTH, TILE_HEIGHT,
                  ARRAY_SIZE(small_tiles), small_tiles);

    thing_template_load("data/things/wall");
    thing_template_load("data/things/wall2");
    thing_template_load("data/things/door");
    thing_template_load("data/things/noentry");
    thing_template_load("data/things/food");
    thing_template_load("data/things/floor");
    thing_template_load("data/things/floor2");
    thing_template_load("data/things/floor3");
    thing_template_load("data/things/floor4");
    thing_template_load("data/things/player");
    thing_template_load("data/things/plant");
    thing_template_load("data/things/seedpod");
    thing_template_load("data/things/pipe");
    thing_template_load("data/things/explosion");
    thing_template_load("data/things/bomb");
    thing_template_load("data/things/spam");
    thing_template_load("data/things/water1");
    thing_template_load("data/things/water2");

    return (true);
}

boolean resource_init (void)
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
