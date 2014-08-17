/*
 * Copyright (C) 2011 Neil McGill
 *
 * See the README file.
 */

#include <stdlib.h>

#include "color.h"

#pragma once

/*
 * http://en.wikipedia.org/wiki/Display_resolution
 *
 * screen sizes @ 2012
 *
 *                                  Steam   Web
 * FHD      16:9    1920    1080    25.04   5.09
 * HD      ~16:9    1366    768     17.19   19.14
 * SXGA     5:4     1280    1024    10.66   7.49
 * WSXGA+   16:10   1680    1050    10.26   3.66
 * WXGA+    16:10   1440    900     7.60    6.61
 * HD+      16:9    1600    900     6.82    3.82
 * XGA      4:3     1024    768     5.53    18.69
 * WXGA     16:10   1280    800     4.25    12.97
 * WUXGA    16:10   1920    1200    3.65    1.11
 * HD      ~16:9    1360    768     2.36    2.28
 * WXGA     16:9    1280    720     1.51    1.54
 * SXGA     4:3     1280    960     0.72    0.72
 * WQHD     16:9    2560    1440    0.72    0.36
 * XGA+     4:3     1152    864     0.87    1.55
 * UXGA     4:3     1600    1200    0.53    n/a
 * WSVGA    17:10   1024    600     0.31    2.25
 * WQXGA    16:10   2560    1600    0.19    n/a
 * SXGA+    4:3     1400    1050    0.18    n/a
 * SVGA     4:3     800     600     0.17    1.03
 * QWXGA    16:9    2048    1152    0.13    n/a
 * VGA      4:3     640     480     0.02    n/a
 * WXGA     5:3     1280    768     n/a     1.54
 *          3:4     768     1024    n/a     1.93
 *          16:9    1093    614     n/a     0.63
 */
#define IPHONE_VIDEO_WIDTH               (320)
#define IPHONE_VIDEO_HEIGHT              (480)
#define MEDIUM_VIDEO_WIDTH               (576)
#define MEDIUM_VIDEO_HEIGHT              (768)
#define IPAD_VIDEO_WIDTH                 (768)
#define IPAD_VIDEO_HEIGHT                (1024)

/*
 * gl.c
 */
void gl_enter_2d_mode(void);
void gl_leave_2d_mode(void);

void blit_flush(void);
void blit_flush_triangles(void);
void blit_fini(void);
void gl_blitquad(float tlx, float tly, float brx, float bry);
void gl_blitsquare(float tlx, float tly, float brx, float bry);
void gl_blitline(float tlx, float tly, float brx, float bry);

/*
 * glshapes.c
 */
void gl_list_square(fpoint tl, fpoint br,
                    texp, fsize tex_tl, fsize tex_br, fsize uv,
                    color hi, color med, color lo);

void gl_list_square_bevelled(fpoint tl, fpoint br,
                             texp, fsize tex_tl, fsize tex_br, fsize uv,
                             color hi, color med, color lo,
                             fsize bevel);

void gl_list_square_bevelled_plain(fpoint tl, fpoint br,
                                   texp, fsize tex_tl, fsize tex_br, fsize uv,
                                   color hi, color med, color lo,
                                   fsize bevel);

void gl_list_rounded_square(fpoint tl, fpoint br,
                            texp, fsize tex_tl, fsize tex_br, fsize uv,
                            color hi, color med, color lo,
                            fsize radius, int32_t sides);

void gl_list_rounded_square_bevelled(fpoint tl, fpoint br,
                                     texp, fsize tex_tl, fsize tex_br, fsize uv,
                                     color hi, color med, color lo,
                                     fsize bevel, fsize radius, int32_t sides);

void gl_list_square_outline_bevelled_plain(fpoint tl, fpoint br,
                                           texp tex,
                                           fsize tex_tl, fsize tex_br,
                                           fsize uv,
                                           color hi, color med, color lo,
                                           fsize bevel);

void gl_ortho_set(int32_t width, int32_t height);

/*
 * gl_push_texcoord
 *
 * Push elements onto the array buffer.
 */
static inline void 
gl_push_texcoord (float **p, float x, float y)
{
    *(*p)++ = x;
    *(*p)++ = y;
}

/*
 * gl_push_vertex
 *
 * Push elements onto the array buffer.
 */
static inline void 
gl_push_vertex (float **p, float x, float y)
{
    *(*p)++ = x;
    *(*p)++ = y;
}

/*
 * gl_push_rgba
 *
 * Push elements onto the array buffer.
 */
static inline void 
gl_push_rgba (float **p, float r, float g, float b, float a)
{
    *(*p)++ = r;
    *(*p)++ = g;
    *(*p)++ = b;
    *(*p)++ = a;
}

#define Vertex2f(x, y)                          \
    *xyp++ = x;                                 \
    *xyp++ = y;

extern GLfloat *bufp;
extern GLfloat *bufp_end;
extern int buf_tex;

extern void blit_init(void);

/*
 * gl_push
 */
static inline void
gl_push (float **p,
         float *p_end,
         uint8_t first,
         float tex_left,
         float tex_top,
         float tex_right,
         float tex_bottom,
         float left,
         float top,
         float right,
         float bottom,
         float r1, float g1, float b1, float a1,
         float r2, float g2, float b2, float a2,
         float r3, float g3, float b3, float a3,
         float r4, float g4, float b4, float a4)
{
    static float last_tex_right;
    static float last_tex_bottom;
    static float last_right;
    static float last_bottom;

    if (*p + 24 >= p_end) {
        DIE("overflow on gl bug");
    }

    if (!first) {
        /*
         * If there is a break in the triangle strip then make a degenerate
         * triangle.
         */
        if ((last_right != left) || (last_bottom != bottom)) {
            gl_push_texcoord(p, last_tex_right, last_tex_bottom);
            gl_push_vertex(p, last_right, last_bottom);
            gl_push_rgba(p, r4, g4, b4, a4);

            gl_push_texcoord(p, tex_left,  tex_top);
            gl_push_vertex(p, left,  top);
            gl_push_rgba(p, r1, g1, b1, a1);
        }
    }

    gl_push_texcoord(p, tex_left,  tex_top);
    gl_push_vertex(p, left,  top);
    gl_push_rgba(p, r1, g1, b1, a1);

    gl_push_texcoord(p, tex_left,  tex_bottom);
    gl_push_vertex(p, left,  bottom);
    gl_push_rgba(p, r2, g2, b2, a2);

    gl_push_texcoord(p, tex_right, tex_top);
    gl_push_vertex(p, right, top);
    gl_push_rgba(p, r3, g3, b3, a3);

    gl_push_texcoord(p, tex_right, tex_bottom);
    gl_push_vertex(p, right, bottom);
    gl_push_rgba(p, r4, g4, b4, a4);

    last_tex_right = tex_right;
    last_tex_bottom = tex_bottom;
    last_right = right;
    last_bottom = bottom;
}

static inline
void blit (int tex,
           float texMinX,
           float texMinY,
           float texMaxX,
           float texMaxY,
           float left,
           float top,
           float right,
           float bottom)
{
#ifdef ENABLE_GL_BULK_DRAW_ARRAYS
    uint8_t first;

    if (!buf_tex) {
        blit_init();
        first = true;
    } else if (buf_tex != tex) {
        blit_flush();
        first = true;
    } else {
        first = false;
    }

    buf_tex = tex;

    color c = gl_color_current();

    float r = ((float)c.r) / 255.0;
    float g = ((float)c.g) / 255.0;
    float b = ((float)c.b) / 255.0;
    float a = ((float)c.a) / 255.0;

    float r1 = r;
    float g1 = g;
    float b1 = b;
    float a1 = a;

    float r2 = r;
    float g2 = g;
    float b2 = b;
    float a2 = a;

    float r3 = r;
    float g3 = g;
    float b3 = b;
    float a3 = a;

    float r4 = r;
    float g4 = g;
    float b4 = b;
    float a4 = a;

    gl_push(&bufp,
            bufp_end,
            first,
            texMinX,
            texMinY,
            texMaxX,
            texMaxY,
            left,
            top,
            right,
            bottom,
            r1, g1, b1, a1,
            r2, g2, b2, a2,
            r3, g3, b3, a3,
            r4, g4, b4, a4);
#else
    glBindTexture(GL_TEXTURE_2D, tex);

    GLfloat xy[4*2];
    GLfloat uv[4*2];
    GLfloat *xyp = xy;
    GLfloat *uvp = uv;

#define TexCoord2f(x, y) *uvp++ = x; *uvp++ = y;
#define Vertex2f(x, y) *xyp++ = x; *xyp++ = y;

    TexCoord2f(texMinX, texMinY);
    TexCoord2f(texMaxX, texMinY);
    TexCoord2f(texMinX, texMaxY);
    TexCoord2f(texMaxX, texMaxY);

    Vertex2f(left, top);
    Vertex2f(right, top);
    Vertex2f(left, bottom);
    Vertex2f(right, bottom);

    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_TEXTURE_COORD_ARRAY);

    glVertexPointer(2, GL_FLOAT, 0, xy);
    glTexCoordPointer(2, GL_FLOAT, 0, uv);
    glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

    glDisableClientState(GL_TEXTURE_COORD_ARRAY);
    glDisableClientState(GL_VERTEX_ARRAY);
#endif
}

/*
 * gl_push_triangle
 */
static inline void
gl_push_triangle (float **p,
                  float *p_end,
                  float x1, float y1,
                  float x2, float y2,
                  float x3, float y3)
{
    if (*p + 24 >= p_end) {
        DIE("overflow on gl bug");
    }

    gl_push_vertex(p, x1, y1);
    gl_push_vertex(p, x2, y2);
    gl_push_vertex(p, x3, y3);
}

static inline
void triangle (float x1, float y1,
               float x2, float y2,
               float x3, float y3)
{
    gl_push_triangle(&bufp,
                     bufp_end,
                     x1, y1,
                     x2, y2,
                     x3, y3);
}

extern GLuint render_buf_id;
extern GLuint fbo_id;
extern GLuint fbo_tex_id;
