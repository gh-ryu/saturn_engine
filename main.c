/*
  Saturn Engine - Demo game
*/

#include "lib/saturn_engine.h"

/*
typedef struct _scenemngr {
    saten_scene *root; // root scene that loads all assets shared by scenes
    saten_scene *title;
    saten_scene *settings;
} scenemngr;
*/
typedef struct _scenemngr { // index 0: uid, index 1: position id
    uint8_t root[2];
    uint8_t title[2];
    uint8_t title_menu[2];
    uint8_t title_menu_settings[2];
} scenemngr;
scenemngr scene = { { 0, 0 }, { 1, 0 }, { 2, 0 } };

int main (int argc, char *argv[])
{
    if (saten_init("saturn_engine_demo", 320, 240, SATEN_FULLSCREEN) < 0)
        fprintf(stderr, "Init error...\n");
    scene.root[1] = saten_scene_create(scene.root[0], NULL, NULL, NULL, NULL);
    saten_run();

    return 0;
}
