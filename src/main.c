/*
  Saturn Engine - Demo game
*/

#define SATEN_GLOBAL_INSTANCE
#define SATEN_SYMKEY "alohah9t075c43cn47x08nc7"

#include "saturn_engine/_lib.h"
#include "_global.h"
#include "scene_root.h"
#include "scene_each.h"
#include "input.h"

int main (int argc, char *argv[])
{
    memset(&scene, 0, sizeof(scenemngr));
    // Engine initialization
    if (saten_init(SATEN_CONF_GAME_NAME, SATEN_MRBLOAD) < 0)
        fprintf(stderr, "Init error...\n");
    // Setting up unique IDs for scenes //TODO let a function handle this?
    scene.root.uid = 0;
    scene.title.uid = 1;
    scene.title_menu.uid = 2;
    scene.title_menu_settings.uid = 3;
    scene.game.uid = 4;
    scene.maptest.uid = 244;
    scene.load.uid = 255;
    // Create root scene
    scene.root = saten_scene_create(scene.root, scene_root_init,
            scene_root_update, scene_root_draw, scene_root_quit,
            FNAME_MRB_LOAD);
    // Set functions to run for each scene
    saten_scene_each_set(scene_each_init, scene_each_update,
            scene_each_draw, scene_each_quit);
    // Run the game loop
    
    //SDL_SetWindowSize(saten_window, 384*2, 216*2);
    //SDL_RenderSetScale(saten_ren, 2, 2);
    //SDL_DisplayMode current;
    //SDL_GetCurrentDisplayMode(0, &current);
    //SDL_GetWindowDisplayMode(saten_window, &current);
    //printf("w: %d, h: %d\n", current.w, current.h);

    saten_voutreg(SATEN_VOUT_320x240, 1);
    saten_voutreg(SATEN_VOUT_640x480, 2);
    saten_voutreg(SATEN_VOUT_1152x648, 3);
    //saten_voutreg(SATEN_VOUT_1920x1080, 5);
    saten_voutreg(SATEN_VOUT_1920x1200, 5);
    saten_video_colw(0, 125, 255);

    // player and input setup
    saten_player_enable(1); // Enable player 1
    saten_player_assign_keyboard(1); // Allow player 1 to use keyboard
    input_init(); // Initialize input module
    input_playerw(1); // Input checks now consider player 1's inputs
    saten_run();
    printf("w: %d, h: %d, x: %d, y: %d\n", saten_game_view.w,
            saten_game_view.h, saten_game_view.x, saten_game_view.y);

    saten_data_save_init(FNAME_SAVE_DATA, true);
    saten_data_save_float(0.1f);
    saten_data_save_int(4629385);
    saten_data_save_bool(true);
    saten_data_save_bool(false);
    saten_data_save_string("Hey world");
    saten_data_save_string("日本語ならどうかな");
    saten_data_save_string("lol");
    saten_data_save_int(32569);
    saten_data_save_quit();
    saten_data_load_init(FNAME_SAVE_DATA, true);
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


    saten_quit();
    return 0;
}
