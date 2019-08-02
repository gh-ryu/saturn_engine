// public
saten_scene_info saten_scene_create(saten_scene_info info,
        saten_fptr_void init, saten_fptr_bool update, saten_fptr_void draw,
        saten_fptr_void quit)
{
    saten_scene scene;
    memset(&scene, 0, sizeof(saten_scene));
    int i = SATEN_DARR_SIZE(saten_darr_scene);
    scene.init = init;
    scene.update = update;
    scene.draw = draw;
    scene.quit = quit;
    scene.init_flag = false;
    scene.quit_flag = false;
    scene.info.id = i;
    scene.info.uid = info.uid;
    scene.info.alive = true;
    //scene.asset_num_sprite = 0;
    //scene.asset_num_sfx = 0;
    //scene.asset_num_bgm = 0;
    //scene.asset_num_text = 0;
    SATEN_DARR_PUSH(saten_darr_scene, scene);
    info.id = i;
    info.alive = true;
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
void saten_scene_init_done(saten_scene_info scene)
{
    int id = scene.id;
    saten_darr_scene[id].init_flag = true;
}

// public
void saten_scene_load_done(saten_scene_info scene)
{
    int id = scene.id;
    saten_darr_scene[id].load_flag = true;
}

// public
saten_scene_info saten_scene_get_current(void)
{
    return saten_darr_scene[(SATEN_DARR_SIZE(saten_darr_scene)) - 1].info;
}

// public
saten_scene_info saten_scene_get_previous(void)
{
    return saten_darr_scene[(SATEN_DARR_SIZE(saten_darr_scene)) - 2].info; 
}

// public
saten_scene_info saten_scene_set_start(saten_scene_info scene)
{
    // returns previous starting scene
    saten_scene_info old = saten_scene_start;
    saten_scene_start = scene;
    return old;
}

// public
bool saten_scene_initialized(saten_scene_info scene)
{
    if (saten_scene_exists(scene)) {
        return saten_darr_scene[scene.id].init_flag;
    }
    return false;
}

bool saten_scene_loaded(saten_scene_info scene)
{
    if (saten_scene_exists(scene)) {
        return saten_darr_scene[scene.id].load_flag;
    }
    return false;
}

bool saten_scene_is_quitting(saten_scene_info scene)
{
    if (saten_scene_exists(scene)) {
        return saten_darr_scene[scene.id].quit_flag;
    }
    return false;
}

// private
bool saten_scene_exists(saten_scene_info scene)
{
    /*
    if (scene.id < 0 || scene.id > SATEN_DARR_SIZE(saten_darr_scene)) {
        saten_errhandler(40);
        return false;
    }
    */
    //return true;
    return scene.alive;
}
