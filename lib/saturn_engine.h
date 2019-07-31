#ifndef SATURN_ENGINE
#define SATURN_ENGINE
#include "core/saturn_engine_core.h"
#include "saturn_engine_structs.h"
// Globals
uint8_t saten_flags;
saten_scene *saten_darr_scene = NULL;
//struct RClass* _saten_mrb_class_resource;

// Declarations
int saten_init(char *title, int w, int h, uint8_t flags);
int saten_run(void);
void saten_game(void);

// Scene funcs
saten_scene_info saten_scene_create(saten_scene_info info,
        saten_fptr_void init, saten_fptr_bool update, saten_fptr_void draw,
        saten_fptr_void quit);
void saten_scene_quit(saten_scene_info scene);
void saten_scene_initialized(saten_scene_info scene);

// Load funcs
void saten_load_resources(saten_scene_info scene, char *fp);


// Engine Flags
#define SATEN_FULLSCREEN (1 << 7)
#define SATEN_MRBLOAD (1 << 6)

// Includes
#include "saturn_engine_scene.h"
#include "saturn_engine_load.h"

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

    if (saten_flag_check(SATEN_MRBLOAD, saten_flags)) {
        //_saten_mrb_class_resource = mrb_define_class_under(saten_mrb,
        //    _saten_mrb_module, "Resource", saten_mrb->object_class);
        FILE *f = NULL;
        saten_fopen(&f, "script/saten_script_module_resource.rb", "r");
        mrb_load_file_cxt(saten_mrb, f, saten_mrbc);
        fclose(f);
    }
    SATEN_DARR_INIT(saten_scene, saten_darr_scene);

    return 0; // everything okay!
}

// public
int saten_run(void)
{
    //if (saten_darr_scene->num < 1) {
    if (SATEN_DARR_SIZE(saten_darr_scene) < 1) {
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
    // Traverse top-bottom (quit scenes)
    for (int i = SATEN_DARR_SIZE(saten_darr_scene)-1; i >= 0; i--) {
        if (saten_darr_scene[i].quit_flag)
            if (saten_darr_scene[i].quit != NULL)
                saten_darr_scene[i].quit();
    }

    // Traverse bottom-top (play game)
    for (int i = 0; i < SATEN_DARR_SIZE(saten_darr_scene); i++) {
        if (!saten_darr_scene[i].init_flag) {
            if (saten_darr_scene[i].init != NULL)
                saten_darr_scene[i].init();
        } else {
            if (saten_darr_scene[i].update != NULL) 
                saten_darr_scene[i].update(
                        (i == SATEN_DARR_SIZE(saten_darr_scene)-1));
                // ^only top scene gets user control
            if (saten_darr_scene[i].draw != NULL)
                saten_darr_scene[i].draw();
        }
    }
    if (saten_keystate[SDL_SCANCODE_ESCAPE])
        saten_break = true;
}
#endif /* SATURN_ENGINE */
