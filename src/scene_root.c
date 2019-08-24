/*
  Saturn Engine - Demo game
*/

#include "saturn_engine/_lib.h"
#include "_global.h"
#include "scene_root.h"
#include "scene_title.h"
#include "input.h"

void scene_root_init(void)
{
    // load global resouces (menu soundeffects, load screen stuff)
    saten_player_assign_pad(1,0); // Allow player 1 to use keyboard
    saten_load_resources(scene.root, false);
    if (saten_scene_loaded(scene.root)) {
        saten_sprite_texturize(saten_resource_sprite(scene.root, 0));
        saten_video_wpw(saten_resource_sprite(scene.root, 0), true);
        saten_sfx_reset(scene.root);
        saten_sfx_volume(scene.root, 0, 30);
        saten_sfx_volume(scene.root, 1, 20);
        saten_sfx_volume(scene.root, 2, 38);
        saten_scene_init_done(scene.root);
        
        scene.title = saten_scene_create(scene.title, scene_title_init,
                scene_title_update, scene_title_draw, scene_title_quit,
                "script/load_resources.rb");
        saten_scene_set_start(scene.title);
        
    }
    
    
}
void scene_root_update(bool c)
{
    if (!saten_input_check())
        saten_key_unlock(-1);
    if (c) {
        if (saten_key(SATEN_KEY_ENTER) == 1)
            saten_sfx_set(scene.root, 0);
        if (saten_key(SATEN_KEY_SPACE) == 1)
            saten_sfx_set(scene.root, 1);
        if (saten_key(SATEN_KEY_A) == 1)
            saten_sfx_set(scene.root, 2);

        saten_sfx_play(scene.root);
        saten_sfx_unset(scene.root, -1);

        if (saten_key(SATEN_KEY_Z)) {
            scene.title = saten_scene_create(scene.title, scene_title_init,
                    scene_title_update, scene_title_draw, scene_title_quit,
                    "script/load_resources.rb");
            saten_scene_set_start(scene.title);
        }

        //if (saten_key(SATEN_KEY_ESC))
        if (input(cancel))
            saten_scene_quit(scene.root);

    }
}

void scene_root_draw(void)
{
    saten_sprite_draw(saten_resource_sprite(scene.root, 0), 0, 0, 0, 0, 0);
}

void scene_root_quit(void)
{
    scene.root = saten_scene_destroy(scene.root);
    saten_video_wpreset();
}
