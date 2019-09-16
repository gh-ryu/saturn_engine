/*
  Saturn Engine - Demo game
*/

#include "saturn_engine/_lib.h"
#include "_global.h"
#include "scene_maptest.h"
#include "scene_load.h"
#include "input.h"

static saten_plane *plane0;
static saten_plane *plane1;

static float scroll_speed_x;
static float scroll_speed_y;

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
        plane0 = saten_plane_create(NULL, 288, 216, 0, 0, 288, 216);
        //saten_plane_linkspr(plane0, saten_resource_sprite(scene.maptest, 1));
        saten_plane_linkspr(plane0, saten_resource_sprite(scene.maptest, 3));
        saten_plane_blitpic(plane0, 0, 0, 0, 1.0f, 0.0);

        plane1 = saten_plane_create(NULL, 288, 216, 0, 0, 288, 216);
        saten_plane_linkspr(plane1, saten_resource_sprite(scene.maptest, 2));
        saten_plane_blitpic(plane1, 0, 0, 0, 1.0f, 0.0);


        saten_scene_init_done(scene.maptest);
    }
}

void scene_maptest_update(bool c)
{
    static float ang = 0.0f;
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
        if (saten_key(SATEN_KEY_X)) {
            if (scroll_speed_x >= 0)
                scroll_speed_x += 0.05f;
            if (scroll_speed_x <= 0)
                scroll_speed_x -= 0.05f;
        }
        if (saten_key(SATEN_KEY_Y)) {
            if (scroll_speed_y >= 0)
                scroll_speed_y += 0.05f;
            if (scroll_speed_y <= 0)
                scroll_speed_y -= 0.05f;
        }
        if (input(accept)) {
            scroll_speed_x = 0;
            scroll_speed_y = 0;
        }
        
        if (input(left) == 1 || input(right) == 1)
            scroll_speed_x = -scroll_speed_x;
        if (input(up) == 1 || input(down) == 1)
            scroll_speed_y = -scroll_speed_y;

        if (saten_key(SATEN_KEY_A))
            plane0->a -= 0.05f;
        if (saten_key(SATEN_KEY_D))
            plane0->a += 0.05f;
        if (saten_key(SATEN_KEY_W))
            plane0->d -= 0.05f;
        if (saten_key(SATEN_KEY_S))
            plane0->d += 0.05f;

        if (saten_key(SATEN_KEY_J))
            plane0->b -= 0.05f;
        if (saten_key(SATEN_KEY_L))
            plane0->b += 0.05f;
        if (saten_key(SATEN_KEY_I))
            plane0->c -= 0.05f;
        if (saten_key(SATEN_KEY_K))
            plane0->c += 0.05f;

        if (saten_key(SATEN_KEY_Q))
            ang += 0.05f;

    }

    ang = fmod(ang, 360.0f);
    //saten_plrot(plane0, ang);
    //plane0->x0 = plane0->screen.w/2;
    //plane0->y0 = plane0->screen.h/2;

    saten_plane_scroll(plane0, floorf(scroll_speed_x), floorf(scroll_speed_y));
    saten_plane_scroll(plane1, floorf(scroll_speed_x+1.0f),
            floorf(scroll_speed_y));
}

void scene_maptest_draw(void)
{
    // start profiling
    uint64_t start = SDL_GetPerformanceCounter();

    //saten_plane_make(plane0);
    //saten_plane_make(plane1);
    saten_plane_open(plane0);
    //saten_plmake(plane0);
    //int yoff;
    
    /* 
     * HORIZONTAL OSCILLATION TEST
     *
     *
    int xoff = 0;
    int dir = 1; // right
    int myx = 0;
    

    static int base = 0;
    for (int i = 0; i < plane0->screen.h; i++) {
        if (i > 94) {
            if (xoff == 8)
                dir = 0;
            if (xoff == -8)
                dir = 1;

            if (dir) {
                xoff++;
            }
            else {
                xoff--;
            }

            myx = sin(3.1415926f*2/120*saten_scene_frame(scene.maptest))*
                (xoff);

            saten_plane_linecpy(plane0, i, myx, 0);
        }
        else {
            saten_plane_linecpy(plane0, i, 0, 0);
        }
    }
    saten_plane_close(plane0);
    if (base < 120)
        base++;

        */
    // MODE7 TEST
    int i = 0;
    for (int y = 0; y < plane0->screen.h; y++) {
        for (int x = 0; x < plane0->screen.w; x++) {
            SDL_Point new = saten_pltransform(plane0, x, y);
            saten_plane_pcpy(plane0, i, new.x, new.y);
            i++;
        }
    }
    saten_plane_close(plane0);

    /*
    saten_plane_open(plane1);
    for (int i = 0; i < plane1->screen.h; i++) {
        if (i % 16 == 0)
            xoff = -2;
        else
            xoff = 0;
        saten_plane_linecpy(plane1, i, xoff, 0);
    }
    //saten_plmake(plane1);
    saten_plane_close(plane1);
    */


    saten_plane_draw(plane0);
    //saten_plane_draw(plane1);
    saten_draw_rect_filled(0, 94, 288, 212, 0, 0, 255, 128, SDL_BLENDMODE_BLEND);
   

    // end profiling
    uint64_t end = SDL_GetPerformanceCounter();
    uint64_t diff = end - start;
    float deltaf = (float)diff;
    deltaf = (deltaf / SDL_GetPerformanceFrequency()) * 1000.0f;
    printf("deltaf: %f\n", deltaf);

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
