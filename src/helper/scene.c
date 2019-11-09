#include "saturn_engine/_lib.h"
#include "_global.h"
#include "helper/scene.h"

#include "scene/root.h"
// SATEN_BUILDER_SCENE_NEXT_INCLUDE

saten_scene_info scene_create(saten_scene_info info)
{
    saten_scene_info new;
    switch(info.uid) {
    // SATEN_BUILDER_SCENE_ROOT
    case 0:
        new = saten_scene_create(info, scene_root_init, scene_root_update,
                scene_root_draw, scene_root_quit, SATEN_LOAD_ROOT);
        break;
    // SATEN_BUILDER_SCENE_NEXT_SRC

    default:
        saten_error_print(
                "Invalid scene passed to src/helper/scene/scene_create()");
        saten_kill();
        break;
    }
    return new;
}