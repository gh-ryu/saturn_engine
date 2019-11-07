#include "saturn_engine/_lib.h"
#include "_global.h"
#include "helper/scene.h"

// SATEN_CONSTRUCTOR_SCENE_NEXT_INLCLUDE

saten_scene_info scene_create(saten_scene_info info)
{
    saten_scene_info new;
    switch(info.uid) {
    // SATEN_CONSTRUCTOR_SCENE_NEXT
    default:
        saten_error_print(
                "Invalid scene passed to src/helper/scene/scene_create()");
        saten_kill();
        break;
    }
    return new;
}
