#include "saturn_engine/_lib.h"
#include "helper/scene.h"
#include "scene/intro.h"

#include "_global.h"

void scene_intro_init(void)
{
}

void scene_intro_update(bool c)
{
}

void scene_intro_draw(void)
{
}

void scene_intro_quit(void)
{
    scene.intro = saten_scene_destroy(scene.intro);
}
