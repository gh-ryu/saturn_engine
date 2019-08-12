/*
  Saturn Engine - Demo game
*/

#include "saturn_engine/_lib.h"
#include "_global.h"
#include "scene_title.h"
#include "scene_load.h"

void scene_title_init(void)
{
    saten_key_lock(-1); // lock all keys
    if (!saten_scene_loaded(scene.title)) // important!
        scene.load = saten_scene_create(scene.load, scene_load_init,
                scene_load_update, scene_load_draw, scene_load_quit,
                "script/load_resources.rb");
    // make sure load screen has passed
    if (saten_scene_loaded(scene.title) && !saten_scene_exists(scene.load)) {
        // initialization with loaded resources starts here
        saten_sprite_texturize(saten_resource_sprite(scene.title, 0));
        saten_sprite_scale(saten_resource_sprite(scene.title, 0), 0.5f);
        int w = saten_get_text_width(saten_resource_text(scene.title, 1));
        printf("%d\n", w);
        saten_text_update(saten_resource_text(scene.title, 1), NULL,
                1.0, 320/2 - w/2, 200);

        saten_scene_init_done(scene.title);
    }
}

void scene_title_update(bool c)
{
    // unlock buttons when user stopped giving input for even a frame
    if (!saten_input_check())
        saten_key_unlock(-1);
    // or unlock buttons after a number of frames
    if (saten_scene_frame(scene.title) >= 260)
        saten_key_unlock(-1);
    if (c) {
        if (saten_key(SATEN_KEY_ESC) == 1) {
            saten_key_lock(-1);
            saten_scene_quit(scene.title);
        }
        if (saten_key(SATEN_KEY_F4)) {
            printf("F4..\n");
            SDL_SetWindowFullscreen(saten_window, SDL_WINDOW_FULLSCREEN);
        }
        /*
        if (saten_key(SATEN_KEY_F5)) {
            printf("F5..\n");
            SDL_SetWindowFullscreen(saten_window,
                    SDL_WINDOW_FULLSCREEN_DESKTOP);
            SDL_DisplayMode current;
            SDL_GetWindowDisplayMode(saten_window, &current);
            printf("w: %d, h: %d\n", current.w, current.h);
        }
        */
    }
}

void scene_title_draw(void)
{
    //saten_text_draw(saten_asset.text[0]);
    //saten_draw_rect_filled(0, 0, 2*384, 2*216, 0, 0,
    //    0, 255, SDL_BLENDMODE_NONE);
    saten_sprite_draw(saten_resource_sprite(scene.title, 0),
            0, 0, 0, 0, 0);
    saten_text_draw(saten_resource_text(scene.title, 1));
    /*
    SDL_RenderSetScale(saten_ren, 1, 1);
    for (int i = 0; i < 480; i++)
        if (i % 2)
            saten_draw_line(0, i, 640, i, 0, 0, 0, 125, SDL_BLENDMODE_BLEND);
    SDL_RenderSetScale(saten_ren, 2, 2);
    */
}

void scene_title_quit(void)
{
    scene.title = saten_scene_destroy(scene.title);
    saten_scene_set_start(scene.root);
}
