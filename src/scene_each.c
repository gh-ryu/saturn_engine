/*
  Saturn Engine - Demo game
*/

#include "saturn_engine/_lib.h"
#include "_global.h"
#include "scene_each.h"


void scene_each_init(void)
{
}

void scene_each_update(bool c)
{
    saten_scene_info scene = *(saten_scene_self());
    saten_sfx_play(scene);
    saten_sfx_unset_all(scene);
}

void scene_each_draw(void)
{
}

void scene_each_quit(void)
{
}
