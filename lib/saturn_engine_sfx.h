// public
int saten_sfx_volume(saten_scene_info scene, int i, int vol)
{
    // returns previous volume
    if (saten_scene_exists(scene))
        return Mix_VolumeChunk(saten_darr_scene[scene.id].res.sfx[i], vol);
    else
        return 0;
}

// public
void saten_sfx_set(saten_scene_info scene, int i)
{
    if (i >= 0 && i < saten_darr_scene[scene.id].res.sfx_n)
        saten_darr_scene[scene.id].res.sfx_flag[i] = true;
}

// public
void saten_sfx_play(saten_scene_info scene)
{
    if (saten_scene_exists(scene)) {
        // plays all soundeffects that have been set
        for (int i = 0; i < saten_darr_scene[scene.id].res.sfx_n; i++)
            if (saten_darr_scene[scene.id].res.sfx_flag[i])
                Mix_PlayChannel(-1, saten_darr_scene[scene.id].res.sfx[i], 0);
    }
}

// public
void saten_sfx_unset(saten_scene_info scene, int i)
{
    if (saten_scene_exists(scene)) {
        // unsets a soundeffect. unsets all if i == -1
        if (i == -1) {
            memset(saten_darr_scene[scene.id].res.sfx_flag, 0,
                    sizeof(bool)*saten_darr_scene[scene.id].res.sfx_n);
        }
        if (i >= 0 && i < saten_darr_scene[scene.id].res.sfx_n)
            saten_darr_scene[scene.id].res.sfx_flag[i] = false;
    }
}

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
