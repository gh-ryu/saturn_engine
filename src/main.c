/*
  Saturn Engine - Demo game
*/

#define SATEN_GLOBAL_INSTANCE

#include "saturn_engine/_lib.h"
#include "_global.h"
#include "scene_root.h"

int main (int argc, char *argv[])
{
    memset(&scene, 0, sizeof(scenemngr));
    // Engine initialization
    if (saten_init("saturn_engine_demo", 320, 240, SATEN_MRBLOAD) < 0)
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
    saten_run();

    return 0;
}
