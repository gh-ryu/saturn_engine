#include "saturn_engine/_lib.h"

// public
int saten_sfx_volume(saten_sound *sound, int vol)
{
    return Mix_VolumeChunk(sound->o, vol);
}

// public
void saten_sfx_set(saten_sound *sound)
{
    if (sound)
        sound->playf = true;
}

// public
void saten_sfx_play(saten_scene_info scene)
{
    if (saten_scene_exists(scene)) {
        // plays all soundeffects that have been set
        for (int i = 0; i < saten_darr_scene[scene.id].res.sfx_n; i++)
            //if (saten_darr_scene[scene.id].res.sfx_flag[i])
            if (saten_darr_scene[scene.id].res.sfx[i]->playf)
                Mix_PlayChannel(-1,
                        saten_darr_scene[scene.id].res.sfx[i]->o, 0);
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
    sound->playf = false;
}

// public
void saten_sfx_unset_all(saten_scene_info scene)
{
    for (int i = 0; i < saten_darr_scene[scene.id].res.sfx_n; i++)
        saten_darr_scene[scene.id].res.sfx[i]->playf = false;
}

/*

// private use after loading/unloading soundeffects
void saten_sfx_reset(saten_scene_info scene)
{
    if (saten_scene_exists(scene)) {
        saten_darr_scene[scene.id].res.sfx_flag =
            saten_realloc(saten_darr_scene[scene.id].res.sfx_flag,
                    sizeof(bool) * saten_darr_scene[scene.id].res.sfx_n);
        memset(saten_darr_scene[scene.id].res.sfx_flag, 0,
                sizeof(bool) * saten_darr_scene[scene.id].res.sfx_n);
    }
}
 */
