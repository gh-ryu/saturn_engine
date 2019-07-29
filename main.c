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
typedef struct _scenemngr {
    uint8_t root;
    uint8_t title;
    uint8_t settings;
} scenemngr;
scenemngr scene = { 0, 0, 0 };

int main (int argc, char *argv[])
{
    if (saten_init("saturn_engine_demo", 320, 240, SATEN_FULLSCREEN) < 0)
        fprintf(stderr, "Init error...\n");
    scene.root = saten_scene_create(NULL, NULL, NULL, NULL);
    saten_run();

    return 0;
}
