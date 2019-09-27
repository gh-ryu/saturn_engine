/*
  Saturn Engine - Demo game
*/

#include "saturn_engine/_lib.h"
#include "_global.h"
#include "scene_title.h"
#include "scene_maptest.h"
#include "scene_load.h"
#include "input.h"

bool jumptomaptest;

void scene_title_init(void)
{
    saten_key_lock(-1); // lock all keys
    if (!saten_scene_loaded(scene.title)) // important!
        scene.load = saten_scene_create(scene.load, scene_load_init,
                scene_load_update, scene_load_draw, scene_load_quit,
                "script/load_resources.rb");
    // make sure load screen has passed
    if (saten_scene_loaded(scene.title) && !saten_scene_exists(scene.load)) {
        // initialization with loaded resources starts here
        saten_sprite_texturize(saten_resource_sprite(scene.title, 0));
        int w = saten_get_text_width(saten_resource_text(scene.title, 1));
        saten_text_update(saten_resource_text(scene.title, 1), NULL,
                1.0, 320/2 - w/2, 200);

        saten_bgmplay(saten_resource_bgm(scene.title, 0));
        //Mix_PlayMusic(saten_resource_bgm(scene.title, 0), -1);
        //Mix_PlayMusic(saten_resource_bgm(scene.title, 1), -1);
        saten_scene_init_done(scene.title);
    }
}

void scene_title_update(bool c)
{
    // unlock buttons when user stopped giving input for even a frame
    if (!saten_input_check())
        saten_key_unlock(-1);
    // or unlock buttons after a number of frames
    if (saten_scene_frame(scene.title) >= 260)
        saten_key_unlock(-1);
    if (c) {
        if (input(cancel) == 1) {
            saten_key_lock(-1);
            saten_scene_quit(scene.title);
        }
        if (input(accept) == 1) {
            saten_scene_quit(scene.title);
            jumptomaptest = true;
        }
        if (saten_key(SATEN_KEY_Q) == 1)
            Mix_VolumeMusic(Mix_VolumeMusic(-1) + 1);
    }
}

void scene_title_draw(void)
{
    saten_sprite_draw(saten_resource_sprite(scene.title, 0),
            0, 0, 0, 0, 0);
    saten_text_draw(saten_resource_text(scene.title, 1));
}

void scene_title_quit(void)
{
    scene.title = saten_scene_destroy(scene.title);
    saten_scene_set_start(scene.root);
    if (jumptomaptest) {
        scene.maptest = saten_scene_create(scene.maptest,
                scene_maptest_init, scene_maptest_update,
                scene_maptest_draw, scene_maptest_quit,
                "script/load_resources.rb");
        saten_scene_set_start(scene.maptest);
    }
}
