// public
saten_scene_info saten_scene_create(saten_scene_info info, saten_fptr_void init,
        saten_fptr_bool update, saten_fptr_void draw, saten_fptr_void quit)
{
    saten_scene scene;
    int i = SATEN_DARR_SIZE(saten_darr_scene);
    scene.init = init;
    scene.update = update;
    scene.draw = draw;
    scene.quit = quit;
    scene.init_flag = false;
    scene.quit_flag = false;
    scene.id = i;
    scene.uid = info.uid;
    scene.asset_num_img = 0;
    scene.asset_num_sfx = 0;
    scene.asset_num_bgm = 0;
    scene.asset_num_text = 0;
    SATEN_DARR_PUSH(saten_darr_scene, scene);
    info.id = i;
    return info;
}

// public
/*
 * When switching scenes (e.g. title (menu) -> game)
 * Call this before creating the new scene (game)
*/
void saten_scene_quit(saten_scene_info scene)
{
    int i = scene.id;
    for (int j = SATEN_DARR_SIZE(saten_darr_scene); i < j; i++)
        saten_darr_scene[i].quit_flag = true;
}

/* Access functions to control scenes */
// public
void saten_scene_initialized(saten_scene_info scene)
{
    int id = scene.id;
    saten_darr_scene[id].init_flag = true;
}
