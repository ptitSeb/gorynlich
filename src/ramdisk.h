/*
 * Copyright(C) 2011-2015 goblinhack@gmail.com
 *
 * See the README file for license info for license.
 */

#pragma once

unsigned char *ramdisk_load(const char *filename, int32_t *outlen);

typedef struct ramdisk_t_ {
    const char *filename;
    const unsigned char *data;
    int32_t len;
} ramdisk_t;

#define NORAMDISK
#ifndef NORAMDISK
void ramdisk_init(void);
#endif
extern ramdisk_t *ramdisk_get_data(void);
