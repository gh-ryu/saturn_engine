#include "saturn_engine/_lib.h"
#include "helper/scene.h"
#include "scene/root.h"

void scene_root_init(void)
{
}

void scene_root_update(bool c)
{
}

void scene_root_draw(void)
{
}

void scene_root_quit(void)
{
    scene.root = saten_scene_destroy(scene.root);
}
