#ifndef SATURN_ENGINE
#define SATURN_ENGINE
#include "core/saturn_engine_core.h"
#include "saturn_engine_structs.h"
// Globals
uint8_t saten_flags;
saten_list *saten_list_scene;
saten_darr *saten_darr_scene;

// Declarations
int saten_init(char *title, int w, int h, uint8_t flags);
int saten_run(void);
void saten_game(void);

// scene funcs
int saten_scene_create(saten_fptr_void init, saten_fptr_bool update,
        saten_fptr_void draw, saten_fptr_void quit);
void saten_scene_quit(int i);


// Engine Flags
#define SATEN_FULLSCREEN (1 << 7)

// Includes
#include "saturn_engine_scene.h"

// public
int saten_init(char *title, int w, int h, uint8_t flags)
{
    saten_flag_set(flags, &saten_flags);
    if (saten_core_init(title, w, h, SATEN_ERRORS|SATEN_INPUT|SATEN_MRB|
                SATEN_TEXT) < 0) {
        fprintf(stderr, "Failed to initialize Saturn Engine\n");
        return -1;
    }

    // saten_flag_check(SATEN_FULLSCREEN, saten_flags)
    //saten_list_init(&saten_list_scene, sizeof(saten_scene));
    saten_darr_init(&saten_darr_scene, sizeof(saten_scene));

    return 0; // everything okay!
}

// public
int saten_run(void)
{
    if (saten_darr_scene->num < 1) {
        saten_errhandler(38);
        return -1;
    }

    // main game loop is no longer user defined
    saten_core_run(saten_game); // have to write internal function
    return 0;
}

// private
void saten_game(void)
{
    saten_scene *scene = saten_darr_scene->data;
    // Traverse top-bottom (quit scenes)
    for (int i = saten_darr_scene->num-1; i >= 0; i--) {
        if (scene[i].quit_flag)
            if (scene[i].quit != NULL)
                scene[i].quit();
    }

    // Traverse bottom-top (play game)
    for (int i = 0; i < saten_darr_scene->num; i++) {
        if (!scene[i].init_flag) {
            if (scene[i].init != NULL)
                scene[i].init();
        } else {
            if (scene[i].update != NULL) // only top scene gets user control
                scene[i].update((i == saten_darr_scene->num-1));
            if (scene[i].draw != NULL)
                scene[i].draw();
        }
    }
    if (saten_keystate[SDL_SCANCODE_ESCAPE])
        saten_break = true;
}
#endif /* SATURN_ENGINE */
