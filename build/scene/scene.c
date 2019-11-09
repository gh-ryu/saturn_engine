#include "saturn_engine/_lib.h"
#include "helper/scene.h"
#include "scene/{{low}}.h"

void scene_{{low}}_init(void)
{
}

void scene_{{low}}_update(bool c)
{
}

void scene_{{low}}_draw(void)
{
}

void scene_{{low}}_quit(void)
{
    scene.{{low}} = saten_scene_destroy(scene.{{low}});
}
