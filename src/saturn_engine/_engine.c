#include "saturn_engine/_lib.h"

int saten_init(char *title, uint8_t flags) /* PUBLIC */
{
    saten_flag_set(flags, &saten_flags);
    int w; int h;
    saten_voutr(SATEN_VOUT_DEFAULT, &w, &h, NULL);

    if (saten_core_init(title, w, h,
                SATEN_ERRORS | SATEN_INPUT|SATEN_MRB | SATEN_TEXT) < 0) {
        fprintf(stderr, "Failed to initialize Saturn Engine\n");
        return -1;
    }


    if (saten_flag_check(SATEN_MRBLOAD, saten_flags)) {
        struct RClass* _saten_mrb_module_resource;
        struct RClass* _saten_mrb_module_img;
        struct RClass* _saten_mrb_module_sfx;
        struct RClass* _saten_mrb_module_bgm;
        struct RClass* _saten_mrb_module_text;
        _saten_mrb_module_resource = mrb_define_module_under(saten_mrb,
            _saten_mrb_module, "Resource");
        _saten_mrb_module_img = mrb_define_module_under(saten_mrb,
            _saten_mrb_module_resource, "Sprite");
        _saten_mrb_module_sfx = mrb_define_module_under(saten_mrb,
            _saten_mrb_module_resource, "SoundEffect");
        _saten_mrb_module_bgm = mrb_define_module_under(saten_mrb,
            _saten_mrb_module_resource, "BackgroundMusic");
        _saten_mrb_module_text = mrb_define_module_under(saten_mrb,
            _saten_mrb_module_resource, "Text");

        mrb_define_module_function(saten_mrb, _saten_mrb_module_img,
                "load", saten_mrb_load_img, MRB_ARGS_ARG(1,1));
        mrb_define_module_function(saten_mrb, _saten_mrb_module_sfx,
                "load", saten_mrb_load_sfx, MRB_ARGS_ARG(1,1));
        mrb_define_module_function(saten_mrb, _saten_mrb_module_bgm,
                "load", saten_mrb_load_bgm, MRB_ARGS_ARG(1,1));
        mrb_define_module_function(saten_mrb, _saten_mrb_module_text,
                "load", saten_mrb_load_text, MRB_ARGS_ARG(1,1));
    }
    SATEN_DARR_INIT(saten_scene, saten_darr_scene);
    saten_video_init();

    saten_framerate_set(SATEN_FRAMERATE);

    return 0; // everything okay!
}

int saten_run(void) /* PUBLIC */
{
    // TODO load settings
    saten_video_lconf();
    saten_video_update();

    if (SATEN_DARR_SIZE(saten_darr_scene) < 1) {
        saten_errhandler(38);
        return -1;
    }

    // main game loop is no longer user defined
    saten_core_run(saten_game);

    return 0;
}

void saten_game(void) /* PRIVATE */
{
    if (saten_killf) // Core tells us to stop all operations
        saten_kill();
    // Handle engine specific inputs
    if (saten_key(SATEN_KEY_F5) == 1)
        saten_video_mswitch();
    if (saten_key(SATEN_KEY_F4) == 1)
        saten_video_wswitch();
    // Update video output if necessary
    if (saten_vconf.update)
        saten_video_update();

    // Traverse top-bottom (quit scenes)
    for (int i = SATEN_DARR_SIZE(saten_darr_scene)-1; i >= 0; i--) {
        if (saten_darr_scene[i].quit_flag)
            if (saten_darr_scene[i].quit != NULL)
                saten_darr_scene[i].quit();
    }

    // Draw wallpaper if set
    saten_video_wpdraw();

    // Traverse bottom-top (play game)
    for (int i=saten_scene_start.id;i< SATEN_DARR_SIZE(saten_darr_scene);i++) {
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
            saten_darr_scene[i].framecnt++;
        }
    }
    saten_video_scldraw();
    // Sets color to be used when renderer resets
    saten_video_prepare_reset();
    // No scenes set = time to quit!
    if (SATEN_DARR_SIZE(saten_darr_scene) == 0)
        saten_brkf = true;
}

void saten_quit(void) /* PUBLIC */
{
    saten_video_sconf();
    saten_video_quit();
    SATEN_DARR_DESTROY(saten_darr_scene);
    saten_core_quit();
}

void saten_kill(void) /* PUBLIC */
{
    // Force all scenes to quit
    saten_scene_info scene = { 0, 0, 1 };
    saten_scene_quit(scene);
}
