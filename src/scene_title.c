/*
  Saturn Engine - Demo game
*/

#include "saturn_engine/_lib.h"
#include "_global.h"
#include "scene_title.h"
#include "scene_load.h"
#include "input.h"

saten_plane *plane0;

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
        //saten_sprite_scale(saten_resource_sprite(scene.title, 0), 0.5f);
        int w = saten_get_text_width(saten_resource_text(scene.title, 1));
        printf("%d\n", w);
        saten_text_update(saten_resource_text(scene.title, 1), NULL,
                1.0, 320/2 - w/2, 200);

        /* PLANE TESTING */
        plane0 = saten_plane_create(NULL, 1024, 1024, 0, 0, 320, 240);
        saten_plane_linkspr(plane0, saten_resource_sprite(scene.title, 0));



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
    }
}

void scene_title_draw(void)
{

    saten_sprite* spr = saten_resource_sprite(scene.title, 0);
    uint32_t pformat = SDL_GetWindowPixelFormat(saten_window);
    SDL_Surface *srf = SDL_ConvertSurfaceFormat(spr->srf, pformat, 0);
    //void *pixels = NULL;

    SDL_Texture *txt = SDL_CreateTexture(saten_ren, pformat,
            SDL_TEXTUREACCESS_STREAMING, srf->w, srf->h);

    // start profiling
    uint64_t start = SDL_GetPerformanceCounter();
    saten_plane_clear(plane0);
    saten_plane_blitpic(plane0, 0, 0, 0, 1.0f, 0.0);
    if (input(pause)) {
        saten_plane_make(plane0, 1);
        saten_plane_draw(plane0, 1);
    } else {
        saten_plane_make(plane0, 0);
        saten_plane_draw(plane0, 0);
    }
    //SDL_Rect src = { 0, 0, 1, 1 };
    //SDL_Rect trgt = { 0, 0, 1, 1 };

    //for (int y = 0; y < 240; y++) {
    //    for (int x = 0; x < 320; x++) {
            //src.x = x;
            //trgt.x = x;
            //src.y = y;
            //trgt.y = y;
    //        SDL_RenderCopy(saten_ren, spr->texture, NULL, NULL);
    //    }
    //}

    //SDL_LockTexture(txt, NULL, &pixels, &srf->pitch);

    //memcpy(pixels, srf->pixels, srf->pitch * srf->h);

    //SDL_UnlockTexture(txt);
    //SDL_RenderCopy(saten_ren, txt, NULL, NULL);

    //SDL_Rect rect = { 0, 0, 320, 240 };
    //SDL_Texture* txt = SDL_CreateTextureFromSurface(saten_ren, spr->srf);
    //SDL_RenderCopy(saten_ren, spr->texture, NULL, &rect);
    /*
    for (int y = 0; y < 240; y++) {
        for (int x = 0; x < 320; x++) {
            uint8_t r0, g0, b0, a0;
            uint32_t pixel = saten_pixel_get(spr, SATEN_SPRITE, x, y);
            SDL_GetRGBA(pixel, spr->srf->format,&r0,&g0,&b0,&a0);
            SDL_RenderDrawPoint(saten_ren, x, y);
        }
    }
    */

    // end profiling
    uint64_t end = SDL_GetPerformanceCounter();
    uint64_t diff = end - start;
    float deltaf = (float)diff;
    deltaf = (deltaf / SDL_GetPerformanceFrequency()) * 1000.0f;
    printf("deltaf: %f\n", deltaf);
    SDL_FreeSurface(srf);
    SDL_DestroyTexture(txt);

    // loading texture and copying: rougly 0.5ms
    // preloading texture and copying: rougly 0.004ms
    // drawing each pixel individually: rougly 6.5ms
    // writing to texture 0.1 - 0.7ms
    // copying each pixel from texture to renderer: 130ms?!
    // copying whole texture for each pixel: 800ms....

    //saten_sprite_draw(saten_resource_sprite(scene.title, 0),
    //        0, 0, 0, 0, 0);
    //saten_text_draw(saten_resource_text(scene.title, 1));
    //
    
    //SDL_DestroyTexture(txt);
}

void scene_title_quit(void)
{
    saten_plane_destroy(plane0);
    plane0 = NULL;
    scene.title = saten_scene_destroy(scene.title);
    saten_scene_set_start(scene.root);
}
