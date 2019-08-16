/*
 * Copyright (C) 2011-2015 goblinhack@gmail.com
 *
 * See the README file for license info for license.
 */

#if !defined(_WIN32) && !defined(__amigaos4__)
#include <execinfo.h>
#endif
#include <stdlib.h>
#include <string.h>

#include "main.h"
#include "backtrace.h"

#define MAX_TRACEBACK 16

typedef struct traceback_ {
    void *array[MAX_TRACEBACK];
    uint32_t size;
} traceback;

void backtrace_print (void)
{
#if !defined(WIN32) && !defined(__amigaos4__)
    void *array[10];
    int32_t size;
    char **strings;
    int32_t i;

    size = backtrace(array, ARRAY_SIZE(array));
    strings = backtrace_symbols(array, size);

    for (i = 0; i < size; i++) {
#if 0
        // tracebacks to the console?
        CON("%s", strings[i]);
#endif

        fprintf(MY_STDERR, "%s\n", strings[i]);
        fflush(MY_STDERR);
    }

    free(strings);
#endif
}
/*
 * Allocate a new traceback.
 */
traceback *traceback_alloc (void)
{
#if !defined(WIN32) && !defined(__amigaos4__)
    traceback *tb;

    tb = (typeof(tb)) malloc(sizeof(*tb));

    tb->size = backtrace(tb->array, MAX_TRACEBACK);

    return (tb);
#else
    return (0);
#endif
}

/*
 * Free a traceback.
 */
void traceback_free (traceback *tb)
{
#if !defined(WIN32) && !defined(__amigaos4__)
    free(tb);
#endif
}

/*
 * Free a traceback.
 */
void traceback_stdout (traceback *tb)
{
#if !defined(WIN32) && !defined(__amigaos4__)
    uint32_t i;
    char **strings;

    strings = backtrace_symbols(tb->array, tb->size);

    for (i = 0; i < tb->size; i++) {
        fprintf(MY_STDOUT, "%s\n", strings[i]);

        if (strstr(strings[i], "main +")) {
            break;
        }
    }

    free(strings);
#endif
}

/*
 * Free a traceback.
 */
void traceback_stderr (traceback *tb)
{
#if !defined(WIN32) && !defined(__amigaos4__)
    uint32_t i;
    char **strings;

    strings = backtrace_symbols(tb->array, tb->size);

    for (i = 0; i < tb->size; i++) {
        fprintf(MY_STDERR, "%s\n", strings[i]);

        if (strstr(strings[i], "main +")) {
            break;
        }
    }

    free(strings);
#endif
}
