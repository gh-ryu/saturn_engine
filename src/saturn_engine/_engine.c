#include "saturn_engine/_lib.h"

int saten_init(char *title, uint8_t flags) /* PUBLIC */
{
    saten_flag_set(flags, &saten_flags);
    int w; int h;
    saten_voutr(SATEN_CONF_VOUT_DEFAULT, &w, &h, NULL);

    if (saten_core_init(title, w, h,
                SATEN_ERRORS | SATEN_INPUT|SATEN_MRB | SATEN_TEXT) < 0) {
        fprintf(stderr, "Failed to initialize Saturn Engine\n");
        return -1;
    }


    if (saten_flag_check(SATEN_MRBLOAD, saten_flags)) {
        saten_mruby_init();
        saten_resource_init();
    }
    saten_scene_init();
    saten_video_init();
    saten_sfx_init();

    saten_framerate_set(SATEN_CONF_FRAMERATE);

    return 0; // everything okay!
}

int saten_run(void) /* PUBLIC */
{
    // TODO load settings
    saten_video_lconf();
    saten_video_update();

    if (saten_scene_count() < 1) {
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

    // Draw wallpaper if set
    saten_video_wpdraw();

    saten_scene_engine_quit(); // Quit and destroy all flagged scenes top>btm

    saten_scene_engine_main(); // Init and run scenes btm>top

    saten_video_scldraw();
    // Sets color to be used when renderer resets
    saten_video_prepare_reset();
    // No scenes set = time to quit!
    if (saten_scene_count() == 0)
        saten_brkf = true;
}

void saten_quit(void) /* PUBLIC */
{
    saten_video_sconf();
    saten_video_quit();
    saten_scene_end();
    saten_resource_quit();
    saten_core_quit();
}

void saten_kill(void) /* PUBLIC */
{
    saten_scene_quit_all();
}
