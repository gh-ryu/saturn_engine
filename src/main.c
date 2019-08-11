/*
  Saturn Engine - Demo game
*/

#define SATEN_GLOBAL_INSTANCE
#define SATEN_SYMKEY "alohah9t075c43cn47x08nc7"

#include "saturn_engine/_lib.h"
#include "_global.h"
#include "scene_root.h"

int main (int argc, char *argv[])
{
    memset(&scene, 0, sizeof(scenemngr));
    // Engine initialization
    if (saten_init("saturn_engine_demo", SATEN_MRBLOAD) < 0)
        fprintf(stderr, "Init error...\n");
    // Setting up unique IDs for scenes //TODO let a function handle this?
    scene.root.uid = 0;
    scene.title.uid = 1;
    scene.title_menu.uid = 2;
    scene.title_menu_settings.uid = 3;
    scene.game.uid = 4;
    scene.load.uid = 255;
    // Create root scene
    scene.root = saten_scene_create(scene.root, scene_root_init,
            scene_root_update, scene_root_draw, scene_root_quit,
            "script/load_resources.rb");
    // Run the game loop
    SDL_SetWindowSize(saten_window, 384*2, 216*2);
    SDL_RenderSetScale(saten_ren, 2, 2);
    SDL_DisplayMode current;
    //SDL_GetCurrentDisplayMode(0, &current);
    SDL_GetWindowDisplayMode(saten_window, &current);
    printf("w: %d, h: %d\n", current.w, current.h);

    saten_run();

    saten_data_save_init("demo_assets/s.dat", true);
    saten_data_save_float(0.1f);
    saten_data_save_int(4629385);
    saten_data_save_bool(true);
    saten_data_save_bool(false);
    saten_data_save_string("Hey world");
    saten_data_save_string("日本語ならどうかな");
    saten_data_save_string("lol");
    saten_data_save_int(32569);
    saten_data_save_quit();
    saten_data_load_init("demo_assets/s.dat", true);
    int i; float f; bool b1; bool b2; char *str1=NULL; char *str2=NULL;
    char *str3=NULL; int i2;
    saten_data_load_float(&f);
    saten_data_load_int(&i);
    saten_data_load_bool(&b1);
    saten_data_load_bool(&b2);
    saten_data_load_string(&str1);
    saten_data_load_string(&str2);
    saten_data_load_string(&str3);
    saten_data_load_int(&i2);
    saten_data_load_quit();

    printf("%d, %f, %d, %d, %s, %s, %s, %d\n",i,f,b1,b2,str1,str2,str3,i2);

    return 0;
}
