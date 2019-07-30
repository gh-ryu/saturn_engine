// public
int saten_scene_create(uint8_t uid, saten_fptr_void init,
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
    scene.uid = uid;
    SATEN_DARR_PUSH(saten_darr_scene, scene);
    return i;

}

// public
/*
 * When switching scenes (e.g. title (menu) -> game)
 * Call this before creating the new scene (game)
*/
void saten_scene_quit(int i)
{
    for (int j = SATEN_DARR_SIZE(saten_darr_scene); i < j; i++)
        saten_darr_scene[i].quit_flag = true;
}
