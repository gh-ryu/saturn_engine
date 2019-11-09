// SATEN_BUILDER_SCENE_{{up}}
    case {{id}}:
        new = saten_scene_create(info, scene_{{low}}_init, scene_{{low}}_update,
                scene_{{low}}_draw, scene_{{low}}_quit, SATEN_LOAD_{{up}});
        break;
    // SATEN_BUILDER_SCENE_NEXT_SRC
