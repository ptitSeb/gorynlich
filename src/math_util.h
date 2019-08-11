/*
 * Copyright (C) 2011-2015 goblinhack@gmail.com
 *
 * See the README file for license info.
 */

#pragma once

#ifdef __GNUC__
 #ifdef __arm__
  #ifdef __ARM_PCS_VFP
   //#warning Arm Hardfloat detected
   #define FASTMATH
  #else
   #ifdef __ARM_FP
    //#warning Arm SoftFP detected
    #define FASTMATH __attribute__((pcs("aapcs-vfp")))
   #else
    //#warning Arm no FP detected
    #define FASTMATH
   #endif
  #endif
 #else
  #define FASTMATH
 #endif
#else
 #define FASTMATH
#endif

#include <math.h>

#include "main.h"

#undef SQUARED
#define SQUARED(x) ((x) * (x))

#undef DISTANCE
#define DISTANCE(xa,ya,xb,yb) \
    sqrt((Double)(SQUARED((xb)-(xa))+SQUARED((yb)-(ya))))

#undef DISTANCE3f
#define DISTANCE3f(xa,ya,za,xb,yb,zb) \
    sqrt((Double)(SQUARED((xb)-(xa))+\
                 SQUARED((yb)-(ya))+\
                 SQUARED((zb)-(za))))

static inline FASTMATH fpoint fadd (const fpoint a, const fpoint b)
{
    #ifdef NEON
    fpoint r;
    r.f32 = a.f32 + b.f32;
    #else
    fpoint r = {a.x + b.x, a.y + b.y};
    #endif
    return (r);
}

static inline FASTMATH fpoint3d fadd3d (const fpoint3d a, const fpoint3d b)
{
    fpoint3d r = {a.x + b.x, a.y + b.y, a.z + b.z};

    return (r);
}

static inline FASTMATH fpoint fsub (const fpoint a, const fpoint b)
{
    #ifdef NEON
    fpoint r;
    r.f32 = a.f32 - b.f32;
    #else
    fpoint r = {a.x - b.x, a.y - b.y};
    #endif
    return (r);
}

static inline FASTMATH fpoint3d fsub3d (const fpoint3d a, const fpoint3d b)
{
    fpoint3d r = {a.x - b.x, a.y - b.y, a.z - b.z};

    return (r);
}

static inline FASTMATH fpoint fmul (Double m, const fpoint b)
{
    #ifdef NEON
    fpoint r;
    r.f32 = b.f32 * m;
    #else
    fpoint r = {m * b.x, m * b.y};
    #endif

    return (r);
}

static inline FASTMATH fpoint3d fmul3d (Double m, const fpoint3d b)
{
    fpoint3d r = {m * b.x, m * b.y, m * b.z};

    return (r);
}

static inline FASTMATH fpoint fdiv (Double m, const fpoint b)
{
    #ifdef NEON
    fpoint r;
    r.f32 = b.f32 / m;
    #else
    fpoint r = {b.x / m, b.y / m};
    #endif

    return (r);
}

static inline FASTMATH fpoint3d fdiv3d (const Double m, const fpoint3d b)
{
    fpoint3d r = {b.x / m, b.y / m, b.z / m};

    return (r);
}

static inline FASTMATH int fcmp (const fpoint3d a, const fpoint3d b)
{
    return ((a.x == b.x) && (a.y == b.y));
}

static inline FASTMATH int fcmp3d (const fpoint3d a, const fpoint3d b)
{
    return ((a.x == b.x) && (a.y == b.y) && (a.z == b.z));
}

static inline FASTMATH Double fdot (const fpoint a, const fpoint b)
{
    #ifdef NEON
    fpoint r;
    r.f32 = a.f32 * b.f32;
    return vpadd_f32(r.f32, r.f32)[0];
    #else
    return (a.x * b.x + a.y * b.y);
    #endif
}

static inline FASTMATH Double fdot3d (const fpoint3d a, const fpoint3d b)
{
    return (a.x * b.x + a.y * b.y + a.z * b.z);
}
 
static inline FASTMATH Double fcross (const fpoint a, const fpoint b)
{
    Double c = a.x*b.y - a.y*b.x;

    return (c);
}

static inline FASTMATH fpoint3d fpoint3d_cross (const fpoint3d a, const fpoint3d b)
{
    fpoint3d c = {a.y*b.z - a.z*b.y, a.z*b.x - a.x*b.z, a.x*b.y - a.y*b.x};

    return (c);
}

static inline FASTMATH fpoint fnormal (const fpoint v)
{
    fpoint n = v;

    Double length = 1.0/sqrt((v.x * v.x) + (v.y * v.y));

    #ifdef NEON
    n.f32 *= length;
    #else
    n.x = v.x * length;
    n.y = v.y * length;
    #endif

    return (n);
}

static inline FASTMATH fpoint3d fnormal3d (fpoint3d v)
{
    fpoint3d n = v;

    Double length = 1.0/sqrt((v.x * v.x) + (v.y * v.y) + (v.z * v.z));

    n.x = v.x * length;
    n.y = v.y * length;
    n.z = v.z * length;

    return (n);
}

static inline FASTMATH Double flength (const fpoint a)
{
    return ((Double)sqrt(a.x*a.x + a.y*a.y));
}

static inline FASTMATH Double fdist (const fpoint a, const fpoint b)
{
    return (DISTANCE(a.x, a.y, b.x, b.y));
}

static inline FASTMATH Double fdist3d (const fpoint3d a, const fpoint3d b)
{
    return (DISTANCE3f(a.x, a.y, a.z, b.x, b.y, b.z));
}

static inline FASTMATH fpoint funit (const fpoint p)
{
    const Double length = 1.0/sqrt(p.x*p.x + p.y*p.y);
    fpoint o;

    #ifdef NEON
    o.f32 = p.f32 * length;
    #else
    o.x = p.x * length;
    o.y = p.y * length;
    #endif

    return (o);
}

static inline FASTMATH void unit (fpoint *p)
{
    const Double length = 1.0/sqrt(p->x*p->x + p->y*p->y);

    #ifdef NEON
    p->f32 *= length;
    #else
    p->x = p->x * length;
    p->y = p->y * length;
    #endif
}

static inline FASTMATH void unit3d (fpoint3d *p)
{
    const Double length = 1.0/sqrt(p->x*p->x + p->y*p->y + p->z*p->z);

    p->x = p->x * length;
    p->y = p->y * length;
    p->z = p->z * length;
}

uint32_t nextpoweroftwo(uint32_t val);

#define PI      3.14159265358979323846f /* pi */
#define RAD_45  0.78539816339744830962f /* pi/4 */
#define RAD_90  1.57079632679489661923f /* pi/2 */
#define RAD_180 3.14159265358979323846f /* pi */
#define RAD_360 (2.0f * 3.14159265358979323846f) /* 2pi */
#define RAD_270 (RAD_180 + RAD_90)

static inline FASTMATH Double angle2radians (const Double angle)
{
    return (angle * (RAD_360 / 360.0));
}

static inline FASTMATH Double radians2angle (const Double rad)
{
    return ((360.0 * rad) / RAD_360);
}

void math_init(void);

/*
 * Fast cached sin/cos routines.
 */
#define RAD_MAX 0xFFFF
#define RAD_STEP (RAD_360 / (Double)RAD_MAX)

static inline FASTMATH Double fsin (Double rad)
{
    const uint16_t index = (uint16_t)(rad / RAD_STEP);
    extern Double FSIN[RAD_MAX];

    return (FSIN[index & (RAD_MAX-1)]);
}

static inline FASTMATH Double fasin (Double rad)
{
    const uint16_t index = (uint16_t)(rad / RAD_STEP);
    extern Double FASIN[RAD_MAX];

    return (FASIN[index & (RAD_MAX-1)]);
}

static inline FASTMATH Double fcos (Double rad)
{
    const uint16_t index = (uint16_t)(rad / RAD_STEP);
    extern Double FCOS[RAD_MAX];

    return (FCOS[index & (RAD_MAX-1)]);
}

static inline FASTMATH Double anglerot (fpoint p)
{
    Double theta;
    Double v = p.y / flength(p);

    if (v < 0) {
        theta = -asin(-v);
    } else {
        theta = asin(v);
    }

    if (p.x > 0) {
        if (p.y > 0) {
            return (theta);
        } else {
            return (RAD_360 + theta);
        }
    } else {
        return (RAD_180 - theta);
    }
}

static inline FASTMATH
fpoint fpoint_rotate (fpoint p, Double theta)
{
    fpoint r;

    r.x = p.x * cos(theta) - p.y * sin(theta);
    r.y = p.x * sin(theta) + p.y * cos(theta);

    return (r);
}

/*
 * Yields an angle between 0 and 180 deg radians
 */
FASTMATH Double fpoint_angle(const fpoint A, const fpoint B);

FASTMATH Double fpoint_angle_clockwise(const fpoint A, const fpoint B);

/*
 * true if perpendicular line from point is in line segment.
 */
FASTMATH uint8_t 
fpoint_dist_line(fpoint P0, fpoint L0, fpoint L1, Double *dist,
                 fpoint *intersect);

/*
 * true if lines intersect
 */
FASTMATH uint8_t get_line_intersection(fpoint p0,
                              fpoint p1,
                              fpoint p2,
                              fpoint p3,
                              fpoint *intersect);
FASTMATH uint8_t get_line_known_intersection(fpoint p0,
                              fpoint p1,
                              fpoint p2,
                              fpoint p3,
                              fpoint *intersect);

FASTMATH double gauss(const double m, const double s);

FASTMATH Double fpoint_project_onto_line(fpoint P0, fpoint L0, fpoint L1);

FASTMATH double gaussrand(double mean, double stddev);
