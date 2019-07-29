// public
int saten_scene_create(saten_fptr_void init, saten_fptr_bool update,
        saten_fptr_void draw, saten_fptr_void quit)
{
    int i = saten_stack_grow(&saten_stack_scene, 1);
    saten_scene *scene = saten_stack_scene->data;
    scene[i].init = init;
    scene[i].update = update;
    scene[i].draw = draw;
    scene[i].quit = quit;
    scene[i].init_flag = false;
    scene[i].quit_flag = false;
    scene[i].id = i;
    return i;

}

// public
/*
 * When switching scenes (e.g. title (menu) -> game)
 * Call this before creating the new scene (game)
*/
void saten_scene_quit(int i)
{
    saten_scene *scene = saten_stack_scene->data;
    for (int j = saten_stack_scene->num; i < j; i++)
        scene[i].quit_flag = true;
}
