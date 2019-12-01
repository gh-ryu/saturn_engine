#include "saturn_engine/_lib.h"

static int *loaded_effects; // Dynamic array of currently loaded sound effects


void saten_sfx_init(void) /* PRIVATE */
{
    SATEN_DARR_INIT(int, loaded_effects);
}

void saten_sfx_quit(void) /* PRIVATE */
{
    SATEN_DARR_DESTROY(loaded_effects);
}

void saten_sfx_refresh_loaded_effects(void) /* PRIVATE */
{
    SATEN_DARR_RESIZE(loaded_effects, 0);
}

void saten_sfx_push_loaded_effect(int id) /* PRIVATE */
{
    SATEN_DARR_PUSH(loaded_effects, id);
}

// public
int saten_sfx_volume(saten_sound *sound, int vol)
{
    return Mix_VolumeChunk(sound->o, vol);
}

// public
void saten_sfx_set(saten_sound *sound)
{
    if (sound)
        sound->flag = true;
}

// public
void saten_sfx_play(void)
{
    saten_sound *sfx = NULL;
    for (int i = 0; i < SATEN_DARR_SIZE(loaded_effects); i++) {
        sfx = saten_resource_fetch(loaded_effects[i]);
        if (sfx->flag)
            Mix_PlayChannel(-1, sfx->o, 0);
    }
}

// public
void saten_sfx_unset(saten_sound *sound)
{
    /*
    if (saten_scene_exists(scene)) {
        // unsets a soundeffect. unsets all if i == -1
        if (i == -1) {
            memset(saten_darr_scene[scene.id].res.sfx_flag, 0,
                    sizeof(bool)*saten_darr_scene[scene.id].res.sfx_n);
        }
        if (i >= 0 && i < saten_darr_scene[scene.id].res.sfx_n)
            saten_darr_scene[scene.id].res.sfx_flag[i] = false;
    }
    */
    sound->flag = false;
}

// public
void saten_sfx_unset_all(void)
{
    saten_sound *sfx = NULL;
    for (int i = 0; i < SATEN_DARR_SIZE(loaded_effects); i++) {
        sfx = saten_resource_fetch(loaded_effects[i]);
        sfx->flag = false;
    }
}
