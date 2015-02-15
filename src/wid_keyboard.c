/*
 * Copyright (C) 2011 Neil McGill
 *
 * See the README file for license.
 */

#include <SDL.h>

#include "main.h"
#include "wid.h"
#include "color.h"
#include "string_ext.h"
#include "ttf.h"
#include "wid_keyboard.h"
#include "time_util.h"
#include "timer.h"

static const char* keys[WID_KEYBOARD_DOWN][WID_KEYBOARD_ACROSS] = {
  { "\"", "!", "@", "#", "$", "%%", "^", "&", "*", "(", ")", "_", "+",  "DEL"    },
  { "1", "2", "3", "4", "5", "6", "7", "8", "9", "0", "{", "}", "-",  "CLEAR"  },
  { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "[", "]", "'",  ":",     },
  { "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "{", "}", "|",  "ENTER", },
  { "u", "v", "w", "x", "y", "z", "<", ">", "?", ",", ".", "/", "\"", "SPACE", },
};

int wid_keyboard_visible;

static void wid_keyboard_destroy(widp w);
static void wid_keyboard_set_focus(wid_keyboard_ctx *ctx,
                                   int focusx, int focusy);

static void wid_keyboard_update_buttons (widp w)
{
    wid_keyboard_ctx *ctx = wid_get_client_context(w);
    verify(ctx);

    double width = 1.0 / (double)(WID_KEYBOARD_ACROSS + 1);
    double height = 1.0 / (double)(WID_KEYBOARD_DOWN + 1);

    int x, y;

    for (x = 0; x < WID_KEYBOARD_ACROSS; x++) {
    for (y = 0; y < WID_KEYBOARD_DOWN; y++) {

        widp b = ctx->buttons[y][x];
        verify(b);

        fpoint tl;
        fpoint br;
        fontp font;
        color c;

        tl.x = (double) x * width;
        tl.y = (double) y * height;
        tl.x += width / 2.0;
        tl.y += height / 2.0;

        br.x = tl.x;
        br.y = tl.y;
        br.x += width;
        br.y += height;

        const char *t = keys[y][x];

        double zoom = 0.005;
        if ((x == ctx->focusx) && (y == ctx->focusy)) {
            tl.x -= zoom;
            tl.y -= zoom;
            br.x += zoom * 2.0;
            br.y += zoom * 2.0;
            c = GREEN;

            if (strlen(t) > 1) {
                font = med_font;
            } else {
                font = vvlarge_font;
            }
            wid_raise(b);
        } else {
            if (strlen(t) > 1) {
                font = med_font;
            } else {
                font = vlarge_font;
            }
            wid_lower(b);

            c = GRAY70;
        }

        wid_set_tl_br_pct(b, tl, br);
        wid_set_color(b, WID_COLOR_TEXT, c);
        wid_set_font(b, font);
    }
    }

    wid_update(w);
}

static void wid_keyboard_event (widp w, int focusx, int focusy,
                                const SDL_KEYSYM *key)
{
    wid_keyboard_ctx *ctx = wid_get_client_context(w);
    verify(ctx);

    const char *add = keys[focusy][focusx];
    if (key) {
        wid_receive_input(ctx->input, key);
    } else if (!strcmp(add, "ENTER")) {
        CON("ENTER");
    } else if (!strcmp(add, "CLEAR")) {
        for (;;) {
            SDL_KEYSYM key = {0};
            key.sym = SDLK_BACKSPACE;

            const char *tmp = wid_get_text(ctx->input);
            if (!tmp || !strlen(tmp)) {
                break;
            }
            wid_receive_input(ctx->input, &key);
        }

    } else if (!strcmp(add, "DEL")) {
        SDL_KEYSYM key = {0};
        key.sym = SDLK_BACKSPACE;
        wid_receive_input(ctx->input, &key);
    } else if (!strcmp(add, "SPACE")) {
        SDL_KEYSYM key = {0};
        key.sym = ' ';
        wid_receive_input(ctx->input, &key);
    } else {
        SDL_KEYSYM key = {0};
        key.sym = add[0];
        wid_receive_input(ctx->input, &key);
    }

    if (key && (focusx == -1) && (focusy == -1)) {
        int x, y;

        for (x = 0; x < WID_KEYBOARD_ACROSS; x++) {
            for (y = 0; y < WID_KEYBOARD_DOWN; y++) {
                if (add[0] == keys[y][x][0]) {
                    focusx = x;
                    focusy = y;
                    break;
                }
            }

            if ((focusx != -1) && (focusy != -1)) {
                break;
            }
        }
    }

    if ((focusx != -1) && (focusy != -1)) {
        wid_keyboard_set_focus(ctx, focusx, focusy);
    }
}

static uint8_t wid_keyboard_mouse_event (widp w,
                                         int focusx, int focusy)
{
    wid_keyboard_ctx *ctx = wid_get_client_context(w);
    verify(ctx);

    wid_keyboard_event(w, focusx, focusy, 0 /* key */);

    return (true);
}

static uint8_t wid_keyboard_button_mouse_event (widp w,
                                                int32_t x, int32_t y,
                                                uint32_t button)
{
    int focus = (typeof(focus)) (uintptr_t) wid_get_client_context2(w);
    int focusx = (focus & 0xff);
    int focusy = (focus & 0xff00) >> 8;

    return (wid_keyboard_mouse_event(w, focusx, focusy));
}

static void wid_keyboard_focus_right (wid_keyboard_ctx *ctx)
{
    ctx->focusx++;
    if (ctx->focusx > WID_KEYBOARD_ACROSS - 1) {
        ctx->focusx = 0;
    }

    wid_keyboard_update_buttons(ctx->w);
}

static void wid_keyboard_focus_left (wid_keyboard_ctx *ctx)
{
    ctx->focusx--;
    if (ctx->focusx < 0) {
        ctx->focusx = WID_KEYBOARD_ACROSS - 1;
    }

    wid_keyboard_update_buttons(ctx->w);
}

static void wid_keyboard_focus_down (wid_keyboard_ctx *ctx)
{
    ctx->focusy++;
    if (ctx->focusy > WID_KEYBOARD_DOWN - 1) {
        ctx->focusy = 0;
    }

    wid_keyboard_update_buttons(ctx->w);
}

static void wid_keyboard_focus_up (wid_keyboard_ctx *ctx)
{
    ctx->focusy--;
    if (ctx->focusy < 0) {
        ctx->focusy = WID_KEYBOARD_DOWN - 1;
    }

    wid_keyboard_update_buttons(ctx->w);
}

static void wid_keyboard_last_focus (wid_keyboard_ctx *ctx)
{
    ctx->focusx = WID_KEYBOARD_ACROSS - 1;
    ctx->focusy = WID_KEYBOARD_DOWN - 1;

    wid_keyboard_update_buttons(ctx->w);
}

static void wid_keyboard_first_focus (wid_keyboard_ctx *ctx)
{
    ctx->focusx = 0;
    ctx->focusy = 0;

    wid_keyboard_update_buttons(ctx->w);
}

static void wid_keyboard_set_focus (wid_keyboard_ctx *ctx, 
                                    int focusx, int focusy)
{
    ctx->focusx = focusx;
    ctx->focusy = focusy;

    wid_keyboard_update_buttons(ctx->w);
}

static uint8_t wid_keyboard_parent_key_down (widp w, 
                                             const SDL_KEYSYM *key)
{
    wid_keyboard_ctx *ctx = wid_get_client_context(w);
    verify(ctx);

    switch (key->sym) {
        case SDLK_ESCAPE:
            (ctx->cancelled)(ctx->w, wid_get_text(ctx->input));
            return (true);

        case SDLK_RETURN: {
            (ctx->selected)(ctx->w, wid_get_text(ctx->input));
            return (true);

        case SDLK_LEFT:
            wid_keyboard_focus_left(ctx);
            break;

        case SDLK_RIGHT:
            wid_keyboard_focus_right(ctx);
            break;

        case SDLK_UP:
            wid_keyboard_focus_up(ctx);
            break;

        case SDLK_DOWN:
            wid_keyboard_focus_down(ctx);
            break;

        case SDLK_HOME:
            wid_keyboard_first_focus(ctx);
            break;

        case SDLK_END:
            wid_keyboard_last_focus(ctx);
            break;

        default:
            wid_keyboard_event(ctx->w, -1, -1, key);
            return (true);
        }
    }

    return (true);
}

static uint8_t wid_keyboard_button_key_event (widp w, const SDL_KEYSYM *key)
{
    int focus = (typeof(focus)) (uintptr_t) wid_get_client_context2(w);
    int focusx = (focus & 0xff);
    int focusy = (focus & 0xff00) >> 8;

    switch (key->sym) {
        case SDLK_BACKSPACE:
        case SDLK_ESCAPE:
        case SDLK_RETURN:
        case SDLK_LEFT:
        case SDLK_RIGHT:
        case SDLK_UP:
        case SDLK_DOWN:
        case SDLK_HOME:
        case SDLK_END:
            break;

        default:
            wid_keyboard_event(w, focusx, focusy, 0);
            return (true);
    }

    return (false);
}

static void wid_keyboard_mouse_over (widp w)
{
    wid_keyboard_ctx *ctx = wid_get_client_context(w);
    verify(ctx);

    /*
     * If we recreate the keyboard with a fixed focus we will be told about
     * a mouse over event immediately which may not be over the focus item
     * and will cause us to move. Annoying.
     */
    if (time_get_time_ms() - ctx->created < 100) {
        return;
    }

    int focus = (typeof(focus)) (uintptr_t) wid_get_client_context2(w);
    int focusx = (focus & 0xff);
    int focusy = (focus & 0xff00) >> 8;

    wid_keyboard_set_focus(ctx, focusx, focusy);
}

static void wid_keyboard_destroy (widp w)
{
    wid_keyboard_ctx *ctx = wid_get_client_context(w);
    verify(ctx);

    wid_set_client_context(w, 0);
    myfree(ctx);

    wid_keyboard_visible = false;
}

static void wid_keyboard_tick (widp w)
{
    wid_keyboard_ctx *ctx = wid_get_client_context(w);
    verify(ctx);

    static int val;
    static int delta = 1;
    static int step = 2;

    val += delta * step;

    if (val > 255) {
        val = 255;
        delta = -1;
    }

    if (val < 200) {
        val = 200;
        delta = 1;
    }

    int x, y;

    for (x = 0; x < WID_KEYBOARD_ACROSS; x++) {
    for (y = 0; y < WID_KEYBOARD_DOWN; y++) {

        if ((x != ctx->focusx) || (y != ctx->focusy)) {
            continue;
        }

        widp b = ctx->buttons[y][x];
        verify(b);

        color c;
        c = GREEN;
        c.g = val;

        /*
         * Make sure the other widgets look plain in all modes.
         */
        int old_mode = wid_get_mode(b);

        int mode;
        for (mode = WID_MODE_NORMAL; mode < WID_MODE_LAST; mode++) {
            wid_set_mode(b, mode);
            wid_set_color(b, WID_COLOR_TEXT, c);
            wid_set_text_outline(b, true);
        }

        wid_set_mode(b, old_mode);
    }
    }
}

static void wid_keyboard_destroy_begin (widp w)
{
    wid_set_tex(w, 0, 0);
    wid_set_no_shape(w);

    wid_move_delta_pct_in(w, -2.0, 0.0, 200);
}

widp wid_keyboard (const char *text,
                   const char *title,
                   wid_keyboard_event_t selected,
                   wid_keyboard_event_t cancelled)
{
    wid_keyboard_visible = true;

    /*
     * Create a context to hold button info so we can update it when the focus 
     * changes
     */
    wid_keyboard_ctx *ctx = myzalloc(sizeof(*ctx), "wid keyboard");
    ctx->focusx = WID_KEYBOARD_ACROSS / 2;
    ctx->focusx = WID_KEYBOARD_DOWN / 2;;
    ctx->created = time_get_time_ms();

    widp window = wid_new_window("wid keyboard");
    ctx->w = window;

    /*
     * Main window
     */
    {
        fpoint tl = { 0.0, 0.0};
        fpoint br = { 1.0, 1.0};

        wid_set_tl_br_pct(window, tl, br);

        color c = BLACK;
        c.a = 100;
        wid_set_color(window, WID_COLOR_BG, c);

        wid_set_on_destroy_begin(window, wid_keyboard_destroy_begin);
        wid_set_on_key_down(window, wid_keyboard_parent_key_down);
        wid_set_on_destroy(window, wid_keyboard_destroy);
        wid_set_client_context(window, ctx);
    }

    /*
     * Create the title
     */
    {
        widp w = wid_new_square_button(window, "wid keyboard title");
        wid_set_no_shape(w);

        fpoint tl = { 0.0, 0.1};
        fpoint br = { 1.0, 0.2};

        wid_set_tl_br_pct(w, tl, br);
        wid_set_text(w, title);
        wid_set_text_outline(w, true);
        wid_set_font(w, vvlarge_font);

        wid_set_color(window, WID_COLOR_TEXT, YELLOW);
    }

    /*
     * Create the text input container
     */
    {
        widp w = wid_new_square_button(window, "wid keyboard input");

        ctx->input = w;

        fpoint tl = { 0.1, 0.2};
        fpoint br = { 0.9, 0.3};

        wid_set_tl_br_pct(w, tl, br);
        wid_set_text(w, text);
        wid_set_text_outline(w, true);
        wid_set_show_cursor(w, true);
        wid_set_font(w, vlarge_font);
        wid_set_client_context(w, ctx);

        wid_set_color(w, WID_COLOR_BG, GRAY20);
        wid_set_color(w, WID_COLOR_TL, GRAY60);
        wid_set_color(w, WID_COLOR_BR, GRAY10);
        wid_set_color(w, WID_COLOR_TEXT, GREEN);

        wid_set_mode(w, WID_MODE_OVER);

        wid_set_color(w, WID_COLOR_BG, GRAY20);
        wid_set_color(w, WID_COLOR_TL, GRAY70);
        wid_set_color(w, WID_COLOR_BR, GRAY10);
        wid_set_color(w, WID_COLOR_TEXT, GREEN);

        wid_set_mode(w, WID_MODE_NORMAL);
    }

    /*
     * Create the button container
     */
    {
        widp button_container = wid_new_square_button(window, 
                                                      "wid keyboard buttons");
        wid_set_no_shape(button_container);
        wid_set_on_tick(button_container, wid_keyboard_tick);

        fpoint tl = { 0.0, 0.35};
        fpoint br = { 1.0, 0.85};

        wid_set_tl_br_pct(button_container, tl, br);
        wid_set_client_context(button_container, ctx);

        /*
         * Create the buttons
         */
        int x, y;

        for (x = 0; x < WID_KEYBOARD_ACROSS; x++) {
        for (y = 0; y < WID_KEYBOARD_DOWN; y++) {
            widp b = wid_new_rounded_small_button(button_container, 
                                                  "wid keyboard button");
            ctx->buttons[y][x] = b;

            wid_set_text(b, keys[y][x]);
            wid_set_text_outline(b, true);
            wid_set_on_mouse_over_begin(b, wid_keyboard_mouse_over);
            wid_set_on_key_down(b, wid_keyboard_button_key_event);
            wid_set_on_mouse_down(b, wid_keyboard_button_mouse_event);

            wid_set_color(b, WID_COLOR_BG, GRAY20);
            wid_set_color(b, WID_COLOR_TL, GRAY60);
            wid_set_color(b, WID_COLOR_BR, GRAY10);
            wid_set_color(b, WID_COLOR_TEXT, GREEN);

            wid_set_mode(b, WID_MODE_OVER);

            wid_set_color(b, WID_COLOR_BG, GRAY20);
            wid_set_color(b, WID_COLOR_TL, GRAY70);
            wid_set_color(b, WID_COLOR_BR, GRAY10);
            wid_set_color(b, WID_COLOR_TEXT, GREEN);

            wid_set_mode(b, WID_MODE_NORMAL);

            wid_set_client_context(b, ctx);
            int focus = (y << 8) | x;
            wid_set_client_context2(b, (void*) (uintptr_t) focus);
        }
        }
    }

    wid_keyboard_update_buttons(window);
    wid_set_do_not_lower(window, 1);
    wid_raise(window);

    return (window);
}