/*
  Saturn Engine - Demo game
*/

#include "saturn_engine/_lib.h"
#include "_global.h"
#include "scene/load.h"


void scene_load_init(void)
{
    //saten_load_resources(scene.load, false);
    //saten_scene_load_done(scene.load);
    //if (saten_scene_loaded(scene.load)) {
        saten_scene_init_done(scene.load);
        saten_load_resources(saten_scene_get_previous(), true);
    //}
}

void scene_load_update(bool c)
{
    if (saten_scene_loaded(saten_scene_get_previous())) {
        saten_load_pass_resources(saten_scene_get_previous());
        saten_scene_quit(scene.load);
        saten_mrb_gc_enable();
    }
}

void scene_load_draw(void)
{
    saten_draw_rect_filled(0, 0, SATEN_CONF_GAME_WIDTH, SATEN_CONF_GAME_HEIGHT,
            252, 159, 246, 255, SDL_BLENDMODE_NONE);
}

void scene_load_quit(void)
{
    scene.load = saten_scene_destroy(scene.load);
}
