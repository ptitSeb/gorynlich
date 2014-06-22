/*
 * Copyright (C) 2011 Neil McGill
 *
 * See the LICENSE file for license.
 */

#include <SDL.h>

#include "main.h"
#include "wid.h"
#include "color.h"
#include "wid_intro.h"
#include "wid_popup.h"
#include "wid_dead.h"
#include "thing.h"
#include "wid_notify.h"
#include "timer.h"
#include "client.h"
#include "wid_game_map_client.h"
#include "wid_intro.h"

static widp wid_dead;
static widp wid_quit;

static uint8_t wid_dead_init_done;
static void wid_dead_create(const char *name, 
                            const char *reason,
                            uint8_t rejoin_allowed);
static void wid_dead_destroy(void);

uint8_t wid_dead_init (void)
{
    if (!wid_dead_init_done) {
    }

    wid_dead_init_done = true;

    return (true);
}

void wid_dead_fini (void)
{
    FINI_LOG("%s", __FUNCTION__);

    if (wid_dead_init_done) {
        wid_dead_init_done = false;

        wid_dead_destroy();
    }
}

void wid_dead_hide (void)
{
    wid_dead_destroy();
}

void wid_dead_visible (const char *name, 
                       const char *reason,
                       uint8_t rejoin_allowed)
{
    wid_dead_create(name, reason, rejoin_allowed);
}

static void wid_dead_destroy (void)
{
LOG("wid quit close %p",wid_quit);
    wid_destroy(&wid_quit);
    wid_destroy(&wid_dead);
}

static uint8_t wid_dead_quit_mouse_event (widp w, int32_t x, int32_t y,
                                          uint32_t button)
{
    LOG("Gravestone raised, player quit");

    client_socket_leave();

    wid_game_map_client_hide();

    wid_dead_destroy();

    return (true);
}

static uint8_t is_rejoin_allowed;

static void wid_dead_gravestone_appeared (void *context)
{
    LOG("Gravestone raised");

    wid_notify_flush();

    {
        widp w = wid_quit = wid_new_window("quit");
LOG("wid quit %p",wid_quit);
        wid_set_font(w, med_font);
        wid_set_no_shape(w);

        fpoint tl = {0.0f, 0.00f};
        fpoint br = {1.0f, 1.00f};

        wid_set_tl_br_pct(w, tl, br);
        wid_set_text(w, "Click to continue");
        wid_fade_in_out(w, 1000, 1000, false /* fade out first */);

        wid_set_color(w, WID_COLOR_TEXT, WHITE);
        color c = WHITE;
        c.a = 200;
        wid_set_color(w, WID_COLOR_TEXT, c);

        wid_set_mode(w, WID_MODE_OVER);
        c.a = 200;
        wid_set_color(w, WID_COLOR_TEXT, c);

        wid_set_mode(w, WID_MODE_FOCUS);
        c.a = 100;
        wid_set_color(w, WID_COLOR_TEXT, c);
        wid_set_text_outline(w, true);
        wid_set_text_centerx(w, true);
        wid_set_text_centery(w, true);

        wid_set_on_mouse_down(w, wid_dead_quit_mouse_event);

        wid_raise(w);
        wid_update(w);
    wid_set_focus(w);
    }
}

static void wid_dead_create (const char *name, 
                             const char *reason,
                             uint8_t rejoin_allowed)
{
    if (sdl_is_exiting()) {
        return;
    }

    LOG("Player died, raise gravestone");

    widp w = wid_dead = wid_new_window("dead");
    fpoint tl = { 0.0, 0.3 };
    fpoint br = { 0.4, 1.0 };

    wid_set_tl_br_pct(w, tl, br);

    wid_set_mode(w, WID_MODE_NORMAL);
    wid_set_color(w, WID_COLOR_TL, WHITE);
    wid_set_color(w, WID_COLOR_BR, RED);
    wid_set_color(w, WID_COLOR_BG, WHITE);
    wid_set_font(w, vsmall_font);
    wid_set_bevelled(w, 10);
    wid_set_tex(w, 0, "gravestone");
    wid_set_ignore_events(w, true);

    wid_destroy_in(w, 110000);

    {
        widp w2 = wid_new_square_button(w, "dead");
        wid_set_mode(w2, WID_MODE_NORMAL);
        color c = RED;
        c.a = 0;
        wid_set_color(w2, WID_COLOR_TL, c);
        wid_set_color(w2, WID_COLOR_BR, c);
        wid_set_color(w2, WID_COLOR_BG, c);
        wid_set_color(w2, WID_COLOR_TEXT, GREEN);
        wid_set_text(w2, name);
        wid_set_font(w2, vsmall_font);
        wid_set_ignore_events(w2, true);

        {
            fpoint tl = { 0.0, 0.5 };
            fpoint br = { 1.0, 0.6 };
            wid_set_tl_br_pct(w2, tl, br);
        }
    }

    {
        widp w2 = wid_new_square_button(w, "dead");
        wid_set_mode(w2, WID_MODE_NORMAL);
        color c = BLACK;
        c.a = 0;
        wid_set_color(w2, WID_COLOR_TL, c);
        wid_set_color(w2, WID_COLOR_BR, c);
        wid_set_color(w2, WID_COLOR_BG, c);
        wid_set_color(w2, WID_COLOR_TEXT, GREEN);
        wid_set_text(w2, reason);
        wid_set_font(w2, vsmall_font);
        wid_set_ignore_events(w2, true);

        {
            fpoint tl = { 0.0, 0.8 };
            fpoint br = { 1.0, 0.9 };
            wid_set_tl_br_pct(w2, tl, br);
        }
    }

    wid_raise(w);

    wid_update(w);
    wid_move_to_pct(w, 0.6, 1.3);

    static uint32_t gravestone_appear_delay = 3000;

    wid_move_to_pct_in(w, 0.6, 0.3, gravestone_appear_delay);

    action_timer_create(
            &wid_timers,
            (action_timer_callback)wid_dead_gravestone_appeared,
            (action_timer_destroy_callback)0,
            0, /* context */
            "wid dead timer",
            gravestone_appear_delay,
            0 /* jitter */);

    is_rejoin_allowed = rejoin_allowed;
}
