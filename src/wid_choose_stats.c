/*
 * Copyright (C) 2011 Neil McGill
 *
 * See the LICENSE file for license.
 */


#include "wid.h"
#include "wid_player_stats.h"
#include "wid_choose_name.h"
#include "wid_choose_stats.h"
#include "wid_choose_game_type.h"
#include "wid_intro.h"
#include "wid_server_join.h"
#include "wid_server_create.h"
#include "timer.h"
#include "glapi.h"
#include "server.h"
#include "wid_menu.h"
#include "name.h"
#include "thing.h"
#include "string_util.h"

static widp wid_choose_stats;
static widp wid_choose_stats_background;

static uint8_t wid_choose_stats_init_done;
static void wid_choose_stats_create(void);
static widp menu;

static int intro_effect_delay = 200;
static int saved_focus = 0;

uint8_t wid_choose_stats_init (void)
{
    if (!wid_choose_stats_init_done) {
    }

    wid_choose_stats_init_done = true;

    return (true);
}

void wid_choose_stats_fini (void)
{
    FINI_LOG("%s", __FUNCTION__);

    if (wid_choose_stats_init_done) {
        wid_choose_stats_init_done = false;

        if (wid_choose_stats) {
            wid_destroy(&wid_choose_stats);
            wid_destroy_in(wid_choose_stats_background, wid_hide_delay * 2);
            wid_choose_stats_background = 0;
        }

        if (menu) {
            wid_destroy(&menu);
        }
    }
}

static uint8_t wid_choose_stats_is_hidden;
static uint8_t wid_choose_stats_is_visible;

void wid_choose_stats_hide (void)
{
    if (wid_choose_stats_is_hidden) {
        return;
    }

    wid_choose_stats_is_hidden = true;
    wid_choose_stats_is_visible = false;

    if (!wid_choose_stats) {
        return;
    }

    wid_fade_out(wid_choose_stats_background, intro_effect_delay);

    wid_hide(wid_choose_stats, 0);
    wid_raise(wid_choose_stats);
    wid_update(wid_choose_stats);

    wid_destroy(&wid_choose_stats);
    wid_destroy_in(wid_choose_stats_background, wid_hide_delay * 2);
    wid_choose_stats_background = 0;

    if (menu) {
        wid_destroy(&menu);
    }
}

void wid_choose_stats_visible (void)
{
    if (wid_choose_stats_is_visible) {
        return;
    }

    wid_choose_stats_create();

    wid_choose_stats_is_visible = true;
    wid_choose_stats_is_hidden = false;

    if (!wid_choose_stats) {
        DIE("no wid intro");
    }

    if (global_config.game_over) {
        global_config.game_over = false;
        return;
    }

    wid_visible(wid_choose_stats, 0);
    wid_raise(wid_choose_stats);
    wid_update(wid_choose_stats);

    wid_fade_in(wid_choose_stats_background, intro_effect_delay);
}

static void wid_choose_stats_callback (widp w)
{
    wid_menu_ctx *ctx = (typeof(ctx)) wid_get_client_context(w);
    verify(ctx);

    int32_t row = (typeof(row)) (intptr_t) wid_get_client_context2(w);

    saved_focus = row;

    thing_statsp s;
    if (player) {
        s = &player->stats;
    } else {
        s = &global_config.stats;
    }

    s->spending_points--;

    switch (row) {
    case 1:
        s->hp += s->hp / 10;
        s->max_hp += s->max_hp / 10;
        break;
    case 2:
        s->magic += s->magic / 10;
        s->max_magic += s->max_magic / 10;
        break;
    case 3:
        s->attack_melee++;
        break;
    case 4:
        s->attack_ranged++;
        break;
    case 5:
        s->attack_magical++;
        break;
    case 6:
        s->defense++;
        break;
    case 7:
        s->speed++;
        break;
    case 8:
        s->vision++;
        break;
    case 9:
        s->healing++;
        break;
    }

    if (!s->spending_points) {
        wid_choose_stats_hide();
        wid_choose_game_type_visible();
        return;
    }

    wid_destroy_nodelay(&menu);
    wid_choose_stats_create();
}

static uint8_t 
wid_choose_stats_go_back (void)
{
    wid_choose_stats_hide();
    wid_intro_visible();

    return (true);
}

static uint8_t wid_choose_stats_play_key_event (widp w, const SDL_KEYSYM *key)
{
    switch (key->sym) {
        case SDLK_ESCAPE:
            wid_choose_stats_hide();
            wid_intro_visible();
            return (true);

        default:
            break;
    }

    return (false);
}

static void wid_choose_stats_bg_create (void)
{
    widp wid;

    if (wid_choose_stats_background) {
        return;
    }

    {
        wid = wid_choose_stats_background = wid_new_window("bg");

        float f = (1024.0 / 680.0);

        fpoint tl = { 0.0, 0.0 };
        fpoint br = { 1.0, f };

        wid_set_tl_br_pct(wid, tl, br);

        wid_set_tex(wid, 0, "title2");

        wid_lower(wid);

        color c;
        c = WHITE;
        wid_set_mode(wid, WID_MODE_NORMAL);
        wid_set_color(wid, WID_COLOR_TL, c);
        wid_set_color(wid, WID_COLOR_BR, c);
        wid_set_color(wid, WID_COLOR_BG, c);

        wid_update(wid);
    }
}

static void wid_choose_stats_create (void)
{
    if (!wid_choose_stats) {
        wid_choose_stats = wid_new_window("intro buttons");

        wid_set_no_shape(wid_choose_stats);

        fpoint tl = {0.0f, 0.0f};
        fpoint br = {1.0f, 1.0f};
        wid_set_tl_br_pct(wid_choose_stats, tl, br);
        wid_set_on_key_down(wid_choose_stats, wid_choose_stats_play_key_event);

        color col = BLACK;
        col.a = 0;
        glcolor(col);

        wid_set_mode(wid_choose_stats, WID_MODE_NORMAL);
        wid_set_color(wid_choose_stats, WID_COLOR_TL, col);
        wid_set_color(wid_choose_stats, WID_COLOR_BR, col);
        wid_set_color(wid_choose_stats, WID_COLOR_BG, col);

        wid_choose_stats_bg_create();
        wid_update(wid_choose_stats);

        wid_move_to_pct_centered(wid_choose_stats, 0.5f, 0.5f);
    }

    thing_statsp s;
    s = &global_config.stats;

    int focus = PLAYER_STATS_MAX / 2;

    char *cols[PLAYER_STATS_MAX][2];
    memset(cols, 0, sizeof(cols));

    int i;
    for (i = 0; i < PLAYER_STATS_MAX; i++) {
        char *text = 0;
        char *text2 = 0;
        int stat = 0;

        switch (i) {
        case STAT_SPENDING_POINTS:
            stat = s->spending_points;
            text = dynprintf("%u", stat);
            break;
        case STAT_MAX_HP:
            stat = s->hp;
            if (s->hp != s->max_hp) {
                text = dynprintf("%u (%u)", s->hp, s->max_hp);
            } else {
                text = dynprintf("%u", s->max_hp);
            }
            break;
        case STAT_MAX_MAGIC:
            stat = s->magic;
            if (s->magic != s->max_magic) {
                text = dynprintf("%u (%u)", s->magic, s->max_magic);
            } else {
                text = dynprintf("%u", s->max_magic);
            }
            break;
        case STAT_ATTACK_MELEE:
            stat = s->attack_melee;
            break;
        case STAT_ATTACK_RANGED:
            stat = s->attack_ranged;
            break;
        case STAT_ATTACK_MAGICAL:
            stat = s->attack_magical;
            break;
        case STAT_DEFENSE:
            stat = s->defense;
            break;
        case STAT_SPEED:
            stat = s->speed;
            break;
        case STAT_VISION:
            stat = s->vision;
            break;
        case STAT_HEALING:
            stat = s->healing;
            break;
        }

        int modifier = thing_stats_val_to_modifier(stat);

        if (!text) {
            if (modifier > 0) {
                if (modifier > 2) {
                    text = dynprintf("%%%%fg=gold$%u", stat);
                    text2 = dynprintf("%%%%fg=gold$Lvl %d", modifier);
                } else if (modifier > 2) {
                    text = dynprintf("%%%%fg=yellow$%u", stat);
                    text2 = dynprintf("%%%%fg=yellow$Lvl %d", modifier);
                } else if (modifier > 1) {
                    text = dynprintf("%%%%fg=white$%u", stat);
                    text2 = dynprintf("%%%%fg=white$Lvl %d", modifier);
                } else {
                    text = dynprintf("%%%%fg=gray80$%u", stat);
                    text2 = dynprintf("%%%%fg=gray80$Lvl %d", modifier);
                }
            } else if (modifier < 0) {
                text = dynprintf("%%%%fg=red$%u", stat);
                text2 = dynprintf("%%%%fg=red$Lvl %d", modifier);
            } else {
                text = dynprintf("%u", stat);
            }
        }

        cols[i][0] = text;
        cols[i][1] = text2;
    }

    menu = wid_menu(0,
                vvlarge_font,
                vlarge_font,
                0.5, /* x */
                0.5, /* y */
                3, /* columns */
                saved_focus ? saved_focus : focus, /* focus */
                PLAYER_STATS_MAX - 1, /* items */

                /*
                 * Column widths
                 */
                (double) 0.4, (double) 0.15, (double) 0.15,

                (int) 0,
                player_stats_arr[STAT_SPENDING_POINTS].col1,
                cols[STAT_SPENDING_POINTS][0],
                cols[STAT_SPENDING_POINTS][1],
                (on_mouse_down_t) 0,

                (int) 0,
                player_stats_arr[STAT_MAX_HP].col1,
                cols[STAT_MAX_HP][0],
                cols[STAT_MAX_HP][1],
                wid_choose_stats_callback,

                (int) 0,
                player_stats_arr[STAT_MAX_MAGIC].col1,
                cols[STAT_MAX_MAGIC][0],
                cols[STAT_MAX_MAGIC][1],
                wid_choose_stats_callback,

                (int) 0,
                player_stats_arr[STAT_ATTACK_MELEE].col1,
                cols[STAT_ATTACK_MELEE][0],
                cols[STAT_ATTACK_MELEE][1],
                wid_choose_stats_callback,

                (int) 0,
                player_stats_arr[STAT_ATTACK_RANGED].col1,
                cols[STAT_ATTACK_RANGED][0],
                cols[STAT_ATTACK_RANGED][1],
                wid_choose_stats_callback,

                (int) 0,
                player_stats_arr[STAT_ATTACK_MAGICAL].col1,
                cols[STAT_ATTACK_MAGICAL][0],
                cols[STAT_ATTACK_MAGICAL][1],
                wid_choose_stats_callback,

                (int) 0,
                player_stats_arr[STAT_DEFENSE].col1,
                cols[STAT_DEFENSE][0],
                cols[STAT_DEFENSE][1],
                wid_choose_stats_callback,

                (int) 0,
                player_stats_arr[STAT_SPEED].col1,
                cols[STAT_SPEED][0],
                cols[STAT_SPEED][1],
                wid_choose_stats_callback,

                (int) 0,
                player_stats_arr[STAT_VISION].col1,
                cols[STAT_VISION][0],
                cols[STAT_VISION][1],
                wid_choose_stats_callback,

                (int) 0,
                player_stats_arr[STAT_HEALING].col1,
                cols[STAT_HEALING][0],
                cols[STAT_HEALING][1],
                wid_choose_stats_callback,

                (int) 'b', 
                "%%fmt=left$back", (char*) 0, (char*) 0,     
                wid_choose_stats_go_back);

    for (i = 0; i < PLAYER_STATS_MAX; i++) {
        char *text = 0;

        text = cols[i][0];
        if (text) {
            myfree(text);
        }

        text = cols[i][1];
        if (text) {
            myfree(text);
        }
    }
}
