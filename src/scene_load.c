/*
  Saturn Engine - Demo game
*/

#include "saturn_engine/saturn_engine.h"
#include "_global.h"
#include "scene_load.h"


void scene_load_init(void)
{
    saten_load_resources(scene.load, false);
    //saten_scene_load_done(scene.load);
    if (saten_scene_loaded(scene.load)) {
        saten_text_update(saten_resource_text(scene.load, 0),
                NULL, 2.0, 20, 20);
        saten_sprite_set_tiles(saten_resource_sprite(scene.load, 0), 2, 1);
        saten_sprite_texturize(saten_resource_sprite(scene.load, 0));
        saten_scene_init_done(scene.load);
        saten_load_resources(saten_scene_get_previous(), true);
    }
}

void scene_load_update(bool c)
{
    if (saten_scene_loaded(saten_scene_get_previous())) {
        saten_load_pass_resources(saten_scene_get_previous());
        saten_scene_quit(scene.load);
    }
}

void scene_load_draw(void)
{
    saten_text_draw(saten_resource_text(scene.load, 0));
    if (saten_step % 60) {
        saten_sprite_draw(saten_resource_sprite(scene.load, 0),
                0, 160, 120, 0, 0);
    }
    else {
        saten_sprite_draw(saten_resource_sprite(scene.load, 0),
                1, 160, 120, 0, 0);
    }
}

void scene_load_quit(void)
{
    scene.load = saten_scene_destroy(scene.load);
}
