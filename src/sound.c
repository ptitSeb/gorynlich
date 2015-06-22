/*
 * Copyright (C) 2011 Neil McGill
 *
 * See the README file for license.
 */

#include <SDL_mixer.h>
#include <stdlib.h>

#include "main.h"
#include "sound.h"
#include "ramdisk.h"
#include "tree.h"
#include "config.h"
#include "music.h"
#include "math_util.h"
#include "thing.h"

typedef struct sound_ {
    tree_key_string tree;
    Mix_Chunk *sound;
    unsigned char *data;
    int32_t len;
} sound;

tree_root *all_sound;

static uint8_t sound_init_done;

uint8_t sound_init (void)
{
    sound_init_done = true;

    return (true);
}

static void sound_destroy (sound *m)
{
    Mix_FreeChunk(m->sound);
    myfree(m->data);
}

void sound_fini (void)
{
    FINI_LOG("%s", __FUNCTION__);

    if (sound_init_done) {
        sound_init_done = false;

        if (all_sound) {
            tree_destroy(&all_sound, (tree_destroy_func)sound_destroy);
        }
    }
}

soundp sound_load (const char *filename, const char *name_alias)
{
    if (!music_init_done) {
        DIE("need music init")
        return (0);
    }

    if (name_alias) {
        soundp m = sound_find(name_alias);
        if (m) {
            return (m);
        }
    }

    if (!filename) {
        if (!name_alias) {
            ERR("no filename for sound");
            return (0);
        } else {
            ERR("no filename for loading sound %s", name_alias);
            return (0);
        }
    }

    if (!all_sound) {
        all_sound = tree_alloc(TREE_KEY_STRING, "TREE ROOT: sound");
    }

    soundp m = (typeof(m)) myzalloc(sizeof(*m), "TREE NODE: sound");
    m->tree.key = dupstr(name_alias, "TREE KEY: sound");

    if (!tree_insert(all_sound, &m->tree.node)) {
        DIE("sound insert name_alias [%s] failed", name_alias);
    }

    m->data = ramdisk_load(filename, &m->len);
    if (!m->data) {
        ERR("cannot load sound %s from ramdisk", filename);
        return (0);
    }

    SDL_RWops *rw = SDL_RWFromMem(m->data, m->len);
    if (!rw) {
        ERR("cannot make RW sound %s", filename);
        return (0);
    }

    m->sound = Mix_LoadWAV_RW(rw, 0 /* freesrc */);
    if (!m->sound) {
        ERR("cannot make sound %s: %s %s", filename, Mix_GetError(),
            SDL_GetError());
        return (0);
    }

    DBG("Load %s", filename);

    return (m);
}

/*
 * Find an existing pice of sound.
 */
soundp sound_find (const char *name_alias)
{
    sound target;
    sound *result;

    if (!name_alias) {
        ERR("no name_alias given for sound find");
    }

    memset(&target, 0, sizeof(target));
    target.tree.key = (char*) name_alias;

    result = (typeof(result)) tree_find(all_sound, &target.tree.node);
    if (!result) {
        return (0);
    }

    return (result);
}

void sound_play_at (const char *name_alias, double x, double y)
{
    if (HEADLESS) {
        return;
    }

    if (!music_init_done) {
        return;
    }

    soundp sound = sound_load(0, name_alias);
    if (!sound) {
        LOG("cannot load sound %s: %s", name_alias, Mix_GetError());

        return;
    }

    if (Mix_PlayChannel(-1, sound->sound, 0) == -1) {
        LOG("cannot play %s: %s", sound->tree.key, Mix_GetError());

        return;
    }

    double volume = (float) global_config.sound_volume *
              ((float) MIX_MAX_VOLUME / (float) SOUND_MAX);

    if (player) {
        double distance = DISTANCE(player->x, player->y, x, y) / 8.0;

        if (distance > 1.0) {
            volume /= distance;
        }
    }

    Mix_VolumeChunk(sound->sound, volume);
}

void sound_play (const char *name_alias)
{
    if (HEADLESS) {
        return;
    }

    if (!music_init_done) {
        return;
    }

    soundp sound = sound_load(0, name_alias);
    if (!sound) {
        LOG("cannot load sound %s: %s", name_alias, Mix_GetError());

        return;
    }

    if (Mix_PlayChannel(-1, sound->sound, 0) == -1) {
        LOG("cannot play %s: %s", sound->tree.key, Mix_GetError());

        return;
    }

    double volume = (float) global_config.sound_volume *
              ((float) MIX_MAX_VOLUME / (float) SOUND_MAX);

    Mix_VolumeChunk(sound->sound, volume);
}

void sound_play_n (const char *name_alias, int32_t n)
{
    if (HEADLESS) {
        return;
    }

    if (!music_init_done) {
        return;
    }

    soundp sound = sound_load(0, name_alias);

    if (Mix_PlayChannel(-1, sound->sound, n) == -1) {
        LOG("cannot play %s: %s", sound->tree.key, Mix_GetError());

        return;
    }

    Mix_VolumeChunk(sound->sound,
                    (float) global_config.sound_volume *
                    ((float) MIX_MAX_VOLUME / (float) SOUND_MAX));
}

void sound_play_dead (void)
{
    sound_play("dead");
}

void sound_play_click (void)
{
    sound_play("click");
}

void sound_play_level_end (void)
{
    sound_play("level_end");
}

void sound_play_slime (void)
{
    sound_play("slime");
}

void sound_load_all (void)
{
    sound_load("data/sound/click.wav", "click");
    sound_load("data/sound/powerup.wav", "powerup");
    sound_load("data/sound/level_end.wav", "level_end");
    sound_load("data/sound/explosion.wav", "explosion");
    sound_load("data/sound/slime.wav", "slime");
    sound_load("data/sound/swords_collide_sound_explorer_2015600826.wav", "sword");
    sound_load("data/sound/cash_register2.wav", "cash_register");
    sound_load("data/sound/shotgun_reload_by_ra_the_sun_god.wav", "shotgun_reload");
    sound_load("data/sound/shotgun_by_ra_the_sun_god.wav", "shotgun");
    sound_load("data/sound/swoosh_3_SoundBible.com_1573211927.wav", "swoosh");
    sound_load("data/sound/flame_Arrow_SoundBible.com_618067908.wav", "fireball");
    sound_load("data/sound/coin_roll.wav", "payment");
    sound_load("data/sound/treasure.wav", "treasure");
    sound_load("data/sound/Object_Drop_001.wav", "drop");
    sound_load("data/sound/Door_Latch_002.wav", "door");
    sound_load("data/sound/Electric_Zap.wav", "shield");
    sound_load("data/sound/Red_Alert_FX_001.wav", "thief");
    sound_load("data/sound/boom.wav", "boom");
    sound_load("data/sound/effect.wav", "effect");
    sound_load("data/sound/zombie_SoundBible.com_1966938763.wav", "zombie");
    sound_load("data/sound/Bite_SoundBible.com_2056759375.wav", "bite");
    sound_load("data/sound/bite_SoundBible.com_1625781385.wav", "urgh");
    sound_load("data/sound/zombie_in_painSoundBible.com_134322253.wav", "urgh2");
    sound_load("data/sound/demon_die.wav", "urgh3");
    sound_load("data/sound/82388__robinhood76__01308_man_hit_9.wav", "player_hit");
    sound_load("data/sound/173126__replix__death_sound_male.wav", "male_death");
    sound_load("data/sound/168567__psychentist__ratdeath.wav", "female_death");
}
