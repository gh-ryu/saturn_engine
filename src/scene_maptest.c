/*
  Saturn Engine - Demo game
*/

#include "saturn_engine/_lib.h"
#include "_global.h"
#include "scene_maptest.h"
#include "scene_load.h"
#include "input.h"

saten_plane *plane0;
saten_plane *plane1;

void scene_maptest_init(void)
{
    saten_key_lock(-1); // lock all keys
    if (!saten_scene_loaded(scene.maptest)) // important!
        scene.load = saten_scene_create(scene.load, scene_load_init,
                scene_load_update, scene_load_draw, scene_load_quit,
                "script/load_resources.rb");
    // make sure load screen has passed
    if (saten_scene_loaded(scene.maptest) && !saten_scene_exists(scene.load)) {
        // initialization with loaded resources starts here
        saten_sprite_texturize(saten_resource_sprite(scene.maptest, 0));

        /* PLANE TESTING */
        plane0 = saten_plane_create(NULL, 320, 320, 0, 0, 288, 216);
        saten_plane_linkspr(plane0, saten_resource_sprite(scene.maptest, 0));
        saten_plane_blitpic(plane0, 0, 0, 0, 1.0f, 0.0);

        plane1 = saten_plane_create(NULL, 320, 320, 0, 0, 288, 216);
        saten_plane_linkspr(plane1, saten_resource_sprite(scene.maptest, 0));
        saten_plane_blitpic(plane1, 0, 120, 0, 1.0f, 0.0);


        saten_scene_init_done(scene.maptest);
    }
}

void scene_maptest_update(bool c)
{
    // unlock buttons when user stopped giving input for even a frame
    if (!saten_input_check())
        saten_key_unlock(-1);
    // or unlock buttons after a number of frames
    if (saten_scene_frame(scene.maptest) >= 260)
        saten_key_unlock(-1);
    if (c) {
        if (saten_key(SATEN_KEY_ESC) == 1) {
            saten_key_lock(-1);
            saten_scene_quit(scene.maptest);
        }
    }
    //saten_plane_scroll(plane0, 0, 1);
    //saten_plane_scroll(plane1, 0, -1);
    saten_plane_scroll(plane0, 1, 0);
    //saten_plane_scroll(plane1, 0, -1);
}

void scene_maptest_draw(void)
{
    // start profiling
    uint64_t start = SDL_GetPerformanceCounter();

    if (input(pause)) {
        //TODO Test with SDL_GetRGBA
        saten_plane_make(plane0, 1);
        saten_plane_draw(plane0, 1);
    } else {
        saten_plane_make(plane0, 0);
        //saten_plane_make(plane1, 0);
        //saten_plane_draw(plane1, 0);
        saten_plane_draw(plane0, 0);
    }

    // end profiling
    uint64_t end = SDL_GetPerformanceCounter();
    uint64_t diff = end - start;
    float deltaf = (float)diff;
    deltaf = (deltaf / SDL_GetPerformanceFrequency()) * 1000.0f;
    //printf("deltaf: %f\n", deltaf);

    // loading texture and copying: rougly 0.5ms
    // preloading texture and copying: rougly 0.004ms
    // drawing each pixel individually: rougly 6.5ms
    // writing to texture 0.1 - 0.7ms
    // copying each pixel from texture to renderer: 130ms?!
    // copying whole texture for each pixel: 800ms....
}

void scene_maptest_quit(void)
{
    saten_plane_destroy(plane0);
    plane0 = NULL;
    scene.maptest = saten_scene_destroy(scene.maptest);
    saten_scene_set_start(scene.root);
}
