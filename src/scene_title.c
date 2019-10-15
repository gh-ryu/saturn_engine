/*
  Saturn Engine - Demo game
*/

#include "saturn_engine/_lib.h"
#include "_global.h"
#include "scene_title.h"
#include "scene_maptest.h"
#include "scene_load.h"
#include "input.h"

static bool jumptomaptest;
static saten_menu *menu;

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
        saten_text_posw(saten_resource_text(scene.title, 1), 320/2 - w/2, 200);

        //saten_bgmlposw(6.3);
        saten_bgmplay(saten_resource_bgm(scene.title, 0));
        //saten_music *wow = saten_resource_bgm(scene.title, 2);
        //Mix_PlayMusic(wow->o, -1);

        // Menu test...
        menu = saten_menu_create(SATEN_MENU_VERT, SATEN_MENU_LEFT, false,
                20, 20);
        saten_menu_element_add(menu, saten_resource_text(scene.title, 2),
                    SATEN_MENU_TEXT);
        saten_menu_element_add(menu, saten_resource_text(scene.title, 3),
                    SATEN_MENU_TEXT);
        saten_menu_element_add(menu, saten_resource_text(scene.title, 4),
                    SATEN_MENU_TEXT);
        saten_menu_element_add(menu, saten_resource_text(scene.title, 5),
                    SATEN_MENU_TEXT);
        saten_menu_element_add(menu, saten_resource_text(scene.title, 6),
                    SATEN_MENU_TEXT);
        saten_menu_element_add(menu, saten_resource_text(scene.title, 7),
                    SATEN_MENU_TEXT);

        saten_menu_toggle(menu); // Turn menu on
        saten_menu_element_toggle(menu, 4); // Replay turned off..
        saten_menu_icon_offsetw(menu, 0, 12); // Vert menu
        saten_menu_icon_offsetw(menu, 12, 0); // Hori menu
        //saten_menu_max(menu, 3);
        //saten_menu_intervalw(menu, 20);

        saten_player_enable(1);

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
        /*
        if (input(cancel) == 1) {
            saten_key_lock(-1);
            saten_scene_quit(scene.title);
        }
        if (input(accept) == 1) {
            saten_scene_quit(scene.title);
            jumptomaptest = true;
        }
        */
        if (saten_key(SATEN_KEY_Q) == 1)
            Mix_VolumeMusic(Mix_VolumeMusic(-1) + 1);

        saten_menu_update(menu);
    }
    saten_sfx_play(scene.root);
    saten_sfx_unset_all(scene.root);
}

void scene_title_draw(void)
{
    saten_sprite_draw(saten_resource_sprite(scene.title, 0),
            0, 0, 0, 0, 0);
    saten_text_draw(saten_resource_text(scene.title, 1));
    saten_menu_draw(menu);
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
