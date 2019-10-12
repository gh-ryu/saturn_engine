#include "saturn_engine/_lib.h"

// public
saten_sprite* saten_resource_sprite(saten_scene_info scene, int id)
{
    if (!saten_scene_exists(scene)) {
        saten_errhandler(40);
        return NULL;
    }
    if (id < 0 || id >= saten_darr_scene[scene.id].res.sprite_n) {
        saten_errhandler(41);
        return NULL;
    }
    return saten_darr_scene[scene.id].res.sprite[id];
}

// public
saten_sound* saten_resource_sfx(saten_scene_info scene, int id)
{
    if (!saten_scene_exists(scene)) {
        saten_errhandler(40);
        return NULL;
    }
    if (id < 0 || id >= saten_darr_scene[scene.id].res.sfx_n) {
        saten_errhandler(42);
        return NULL;
    }
    return saten_darr_scene[scene.id].res.sfx[id];
}

// public
saten_music* saten_resource_bgm(saten_scene_info scene, int id)
{
    if (!saten_scene_exists(scene)) {
        saten_errhandler(40);
        return NULL;
    }
    if (id < 0 || id >= saten_darr_scene[scene.id].res.bgm_n) {
        saten_errhandler(43);
        return NULL;
    }
    return saten_darr_scene[scene.id].res.bgm[id];
}

// public
saten_text* saten_resource_text(saten_scene_info scene, int id)
{
    if (!saten_scene_exists(scene)) {
        saten_errhandler(40);
        return NULL;
    }
    if (id < 0 || id >= saten_darr_scene[scene.id].res.text_n) {
        saten_errhandler(44);
        return NULL;
    }
    return saten_darr_scene[scene.id].res.text[id];
}

// public
void saten_resource_free(saten_resmngr res)
{
    for (int i = 0; i < res.sprite_n; i++)
        saten_sprite_destroy(res.sprite[i]);
    for (int i = 0; i < res.sfx_n; i++)
        saten_sound_free(res.sfx[i]);
    for (int i = 0; i < res.bgm_n; i++)
        saten_mufree(res.bgm[i]);
    for (int i = 0; i < res.text_n; i++)
        saten_text_destroy(res.text[i]);
    free(res.sprite);
    free(res.sfx);
    free(res.bgm);
    free(res.text);
    //free(res.sfx_flag);
}
