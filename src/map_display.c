/*
 * Copyright (C) 2011 Neil McGill
 *
 * See the README file for license.
 */

#include <SDL.h>
#include "glapi.h"

#include "main.h"
#include "gl.h"
#include "color.h"
#include "tex.h"
#include "wid.h"
#include "ttf.h"
#include "time.h"
#include "map.h"

/*
 * QUAD per array element.
 */
#define NUMBER_COORDS_PER_VERTEX 4

/*
 * x and y per element.
 */
#define NUMBER_DIMENSIONS_PER_COORD 2

static const uint32_t NUMBER_BYTES_PER_VERTICE =
                                            sizeof(GLfloat) *
                                            NUMBER_DIMENSIONS_PER_COORD;

static const uint32_t NUMBER_BYTES_PER_ARRAY_ELEM =
                                            sizeof(GLfloat) *
                                            NUMBER_COORDS_PER_VERTEX *
                                            NUMBER_DIMENSIONS_PER_COORD;
/*
 * Two arrays, xy and uv.
 */
static const uint32_t NUMBER_ARRAY_ELEM_ARRAYS = 2;

/*
 * map_tile_to_tex_coords
 *
 * Given a tile in a tile array, return the tex co-ords.
 */
static inline void
map_tile_to_tex_coords (map_frame_ctx_t *map,
                        const uint16_t tile,
                        GLfloat *tex_left,
                        GLfloat *tex_right,
                        GLfloat *tex_top,
                        GLfloat *tex_bottom)
{
    const uint16_t tx = tile % map->tex_tiles_width; 
    const uint16_t ty = tile / map->tex_tiles_height; 

    *tex_left   = map->tex_float_width * tx;
    *tex_right  = *tex_left + map->tex_float_width;
    *tex_top    = map->tex_float_height * ty;
    *tex_bottom = *tex_top + map->tex_float_height;
}

/*
 * map_display_init
 */
void map_display_init (map_frame_ctx_t *map)
{
    /*
     * Our array size requirements.
     */
    uint32_t gl_array_size_required;

    /*
     * Screen size.
     */
    uint32_t width = global_config.video_pix_width;
    uint32_t height = global_config.video_pix_height;

    /*
     * If the screen size has changed or this is the first run, allocate our
     * buffer if our size requirements have changed.
     */
    gl_array_size_required =
                    width *
                    height *
                    NUMBER_BYTES_PER_ARRAY_ELEM *
                    NUMBER_ARRAY_ELEM_ARRAYS * 2; // for degenerate triangles

    /*
     * Requirements have changed for buffer space?
     */
    if (map->gl_array_size != gl_array_size_required) {
        map->gl_array_size = gl_array_size_required;

        if (map->gl_array_buf) {
            myfree(map->gl_array_buf);
        }

        map->gl_array_buf = myzalloc(gl_array_size_required, "GL xy buffer");
    }

    if (!map->tex) {
        map->tex = tex_find("sprites_small");
        if (!map->tex) {
            return;
        }

        map->bind = tex_get_gl_binding(map->tex);

        map->tex_width = tex_get_width(map->tex);
        map->tex_height = tex_get_height(map->tex);

        map->tex_tile_width = tex_get_tile_width(map->tex);
        map->tex_tile_height = tex_get_tile_height(map->tex);

        map->tex_tiles_width = tex_get_tiles_width(map->tex);
        map->tex_tiles_height = tex_get_tiles_height(map->tex);

        map->tex_float_width  =
                        (1.0 / (float)map->tex_width) * map->tex_tile_width;
        map->tex_float_height =
                        (1.0 / (float)map->tex_height) * map->tex_tile_height;
    }
}

/*
 * map_display
 *
 * Render one frame of the map.
 */
static void map_display_ (map_frame_ctx_t *map)
{
    glBindTexture(GL_TEXTURE_2D, map->bind);

    /*
     * Where we are currently up to in writing to these buffers.
     */
    GLfloat *bufp;

    /*
     * Our array size requirements.
     */
    uint32_t nvertices;

    /*
     * Individual co-ordinates for each tile.
     */
    GLfloat left;
    GLfloat right;
    GLfloat top;
    GLfloat bottom;

    GLfloat tex_left;
    GLfloat tex_right;
    GLfloat tex_top;
    GLfloat tex_bottom;

    /*
     * Screen size.
     */
    uint16_t width = global_config.video_pix_width;
    uint16_t height = global_config.video_pix_height;

    /*
     * Temps
     */
    uint16_t x;
    uint16_t y;
    map_tile_t *map_tile;

    tex_left   = 0;
    tex_right  = map->tex_float_width;
    tex_top    = 0;
    tex_bottom = map->tex_float_height;

    bufp = map->gl_array_buf;

    uint16_t cx = map->px / TILE_WIDTH;
    uint16_t cy_start = map->py / TILE_HEIGHT;
    uint16_t cy;
    uint16_t tile;
    boolean first = true;

    left = TILE_WIDTH - (map->px % TILE_WIDTH);
    left -= TILE_WIDTH;

    for (x = 0; x <= width; x += TILE_WIDTH, cx++) {

        cy = cy_start;

        right = left + TILE_WIDTH;

        map_tile = &map->tiles[cx * map->map_width + cy];

        tile = map_tile->tile;

        map_tile_to_tex_coords(map, tile,
                               &tex_left,
                               &tex_right,
                               &tex_top,
                               &tex_bottom);

        top = TILE_HEIGHT - (map->py % TILE_HEIGHT);
        top -= TILE_HEIGHT;

        /*
         * Repeat the first vertex so we create a degenerate triangle.
         */
        if (!first) {
            gl_push_texcoord(&bufp, tex_left,  tex_top);
            gl_push_vertex(&bufp, left,  top);
        } else {
            first = false;
        }

        for (y = 0; y <= height; y += TILE_HEIGHT, cy++, map_tile++) {

            bottom = top + TILE_HEIGHT;

            tile = map_tile->tile;

            map_tile_to_tex_coords(map, tile,
                                   &tex_left,
                                   &tex_right,
                                   &tex_top,
                                   &tex_bottom);

            /*
             * Repeat the first vertex so we create a degenerate triangle.
             */
            gl_push_texcoord(&bufp, tex_left,  tex_top);
            gl_push_vertex(&bufp, left,  top);

            gl_push_texcoord(&bufp, tex_right, tex_top);
            gl_push_vertex(&bufp, right, top);

            gl_push_texcoord(&bufp, tex_left,  tex_bottom);
            gl_push_vertex(&bufp, left,  bottom);

            gl_push_texcoord(&bufp, tex_right, tex_bottom);
            gl_push_vertex(&bufp, right, bottom);

            top += TILE_HEIGHT;
        }

        /*
         * Repeat the last vertex so we create a degenerate triangle.
         */
        gl_push_texcoord(&bufp, tex_right, tex_bottom);
        gl_push_vertex(&bufp, right, bottom);

        left += TILE_WIDTH;
    }

    /*
     * Display all the tiles selected above in one blast.
     */
    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_TEXTURE_COORD_ARRAY);

    nvertices = (bufp - map->gl_array_buf) /
                    (NUMBER_DIMENSIONS_PER_COORD * NUMBER_ARRAY_ELEM_ARRAYS);

    glTexCoordPointer(
        NUMBER_DIMENSIONS_PER_COORD, // (u,v)
        GL_FLOAT,
        NUMBER_BYTES_PER_VERTICE * 2,
        map->gl_array_buf);

    glVertexPointer(
        NUMBER_DIMENSIONS_PER_COORD, // (x,y)
        GL_FLOAT,
        NUMBER_BYTES_PER_VERTICE * 2,
        ((char*)map->gl_array_buf) + NUMBER_BYTES_PER_VERTICE);

    glBindTexture(GL_TEXTURE_2D, tex_get_gl_binding(map->tex));

    glDrawArrays(GL_TRIANGLE_STRIP, 0, nvertices);

    glBindTexture(GL_TEXTURE_2D, 0);

    glDisableClientState(GL_TEXTURE_COORD_ARRAY);
    glDisableClientState(GL_VERTEX_ARRAY);
}

/*
 * map_display_debug
 *
 * Render one frame of the map.
 */
static void 
map_display_debug (map_frame_ctx_t *map, uint32_t x, uint32_t y)
{
    if (!map) {
        return;
    }

    static char text[40] = {0};

    snprintf(text, sizeof(text), "(%d,%d) .. (%d,%d)",
             map->px / TILE_WIDTH,
             map->py / TILE_HEIGHT,
             (map->px / TILE_WIDTH) + map->tiles_per_screen_x,
             (map->py / TILE_HEIGHT) + map->tiles_per_screen_y);

    glcolor(RED);

    ttf_puts(small_font, text, x, y, 1.0, 1.0, true);

    float map_scale = 4;

    float x1 = 0;
    float x2 = ((float)map->map_width) / map_scale;
    float y1 = 0;
    float y2 = ((float)map->map_height) / map_scale;

    x1 += x;
    x2 += x;
    y1 += y + 20;
    y2 += y + 20;

    glBindTexture(GL_TEXTURE_2D, 0);

    color c = CYAN;
    c.a = 200;
    glcolor(c);
    gl_blitquad(x1,y1,x2,y2);

    x1 = map->px / TILE_WIDTH;
    x2 = x1 + map->tiles_per_screen_x;

    y1 = map->py / TILE_HEIGHT;
    y2 = y1 + map->tiles_per_screen_y;

    x1 /= map_scale;
    x2 /= map_scale;
    y1 /= map_scale;
    y2 /= map_scale;

    x1 += x;
    x2 += x;
    y1 += y + 20;
    y2 += y + 20;

    c = GREEN;
    c.a = 200;
    glcolor(c);
    gl_blitquad(x1,y1,x2,y2);
}

/*
 * map_display
 *
 * Render one frame of the map.
 */
void map_display (void)
{
    if (!map_fg) {
        return;
    }

    color c = WHITE;

    c.a = 150;
    glcolor(c);
    map_display_(map_bg);

    c.a = 255;
    glcolor(c);
    map_display_(map_fg);

    if (fps_enabled) {
        map_display_debug(map_fg, 100, 0);
        map_display_debug(map_bg, 400, 0);
    }
}
