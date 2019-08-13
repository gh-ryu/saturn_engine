#include "saturn_engine/_lib.h"

saten_vinfo *video_modes; // dynamic array
saten_window_info winfo; // information about window
bool video_modes_flag;

// private
void saten_video_init(void)
{
    saten_game_view.w = SATEN_GAME_WIDTH;
    saten_game_view.h = SATEN_GAME_HEIGHT;

    SATEN_DARR_INIT(uint8_t, video_modes);
    video_modes_flag = true;

    saten_vconf.scale = SATEN_GSCALE_DEFAULT;
    /*
    saten_vconf.fullscreen = false;
    saten_vconf.fullscreend = false;
    saten_vconf.filter_flag = false;
    saten_vconf.filter = 0;
    saten_vconf.wpcol.r = 0;
    saten_vconf.wpcol.g = 0;
    saten_vconf.wpcol.b = 0;
    saten_vconf.wpcol.a = 0;
    saten_vconf.wp = NULL;
    */
    saten_vconf.vout = SATEN_VOUT_DEFAULT;
    saten_vconf.update = true;
}

// private
void saten_video_prepare_reset(void)
{
    SDL_SetRenderDrawColor(saten_ren, saten_vconf.wpcol.r,
            saten_vconf.wpcol.g, saten_vconf.wpcol.b, 255);
}

// public
void saten_video_wpreset(void)
{
    saten_vconf.wp = NULL;
}

// public
void saten_video_wpw(saten_sprite *spr, bool repeat)
{
    saten_vconf.wprepeat = repeat;
    saten_vconf.wp = spr;
}

//  private
void saten_video_wpdraw(void)
{
    SDL_RenderSetViewport(saten_ren, NULL);
    if (saten_vconf.wp) {
        if (saten_vconf.wprepeat)
            saten_sprite_repeat(saten_vconf.wp, 0, 0, 0,
                    winfo.worig, winfo.horig);
        else
            saten_sprite_draw(saten_vconf.wp, 0, 0, 0, -1, false);
    }
    SDL_RenderSetViewport(saten_ren, &saten_game_view);
}

// public
void saten_voutreg(uint8_t mode, float scale)
{
    // Register video output for F5 switch
    saten_vinfo info;
    info.mode = mode;
    info.scale = scale;
    SATEN_DARR_PUSH(video_modes, info);
}

// public
void saten_video_colw(uint8_t r, uint8_t g, uint8_t b)
{
    saten_vconf.wpcol.r = r;
    saten_vconf.wpcol.g = g;
    saten_vconf.wpcol.b = b;
}

// private
void saten_video_mswitch(void)
{
    int index;
    for (int i = 0; i < SATEN_DARR_SIZE(video_modes); i++) {
        if (video_modes[i].mode == saten_vconf.vout)
            index = i;
    }
    index = (index + 1) % (SATEN_DARR_SIZE(video_modes));
    saten_vconf.vout = video_modes[index].mode;
    saten_vconf.update = true;
}

// public
void saten_video_update(void)
{
    // TODO error handling
    saten_vconf.update = false;
    /* Updates window */
    SDL_SetWindowFullscreen(saten_window, 0);
    int w; int h; float s;
    if (saten_vconf.fullscreend) {
        /// Adjust scale dynamically
        SDL_SetWindowFullscreen(saten_window, SDL_WINDOW_FULLSCREEN_DESKTOP);
        SDL_DisplayMode dmode;
        if (SDL_GetWindowDisplayMode(saten_window, &dmode) < 0)
            saten_errhandler(53);
        w = dmode.w;
        h = dmode.h;
        for (int i=1;SATEN_GAME_WIDTH*i<=w&&SATEN_GAME_HEIGHT*i<=h; i++)
            saten_vconf.scale = i;
    } else {
        saten_voutr(saten_vconf.vout, &w, &h, &s);
        saten_vconf.scale = s;
        SDL_SetWindowSize(saten_window, w, h);
        if (saten_vconf.fullscreen)
            SDL_SetWindowFullscreen(saten_window, SDL_WINDOW_FULLSCREEN);
    }

    SDL_RenderSetScale(saten_ren, saten_vconf.scale, saten_vconf.scale);

    saten_game_view.x = 0;
    saten_game_view.y = 0;
    winfo.subw = 0;
    winfo.subh = 0;

    if (SATEN_GAME_WIDTH * saten_vconf.scale < w) {
        int diff = w - (SATEN_GAME_WIDTH * saten_vconf.scale);
        saten_game_view.x = (diff / 2) / saten_vconf.scale;
        winfo.subw = diff;
    }
    if (SATEN_GAME_HEIGHT * saten_vconf.scale < h) {
        int diff = h - (SATEN_GAME_HEIGHT * saten_vconf.scale);
        saten_game_view.y = (diff / 2) / saten_vconf.scale;
        winfo.subh = diff;
    }
    SDL_RenderSetViewport(saten_ren, &saten_game_view);
    winfo.w = w;
    winfo.h = h;
    winfo.worig = w / saten_vconf.scale;
    winfo.horig = h / saten_vconf.scale;
}

// public
void saten_voutr(uint8_t t, int *w, int *h, float *s)
{
    // read width and height from video out
    if (video_modes_flag)
        for (int i = 0; i < SATEN_DARR_SIZE(video_modes); i++) {
            printf("... %d\n", i);
            if (video_modes[i].mode == t) {
                *s = video_modes[i].scale;
            }
        }
    switch (t) {
    case SATEN_VOUT_320x240:
        *w = 320;
        *h = 240;
        break;
    case SATEN_VOUT_384x216:
        *w = 384;
        *h = 216;
        break;
    case SATEN_VOUT_768x432:
        *w = 768;
        *h = 432;
        break;
    case SATEN_VOUT_1152x648:
        *w = 1152;
        *h = 648;
        break;
    case SATEN_VOUT_640x480:
        *w = 640;
        *h = 480;
        break;
    case SATEN_VOUT_1280x720:
        *w = 1280;
        *h = 720;
        break;
    case SATEN_VOUT_1366x768:
        *w = 1366;
        *h = 768;
        break;
    case SATEN_VOUT_1920x1080:
        *w = 1920;
        *h = 1080;
        break;
    case SATEN_VOUT_1920x1200:
        *w = 1920;
        *h = 1200;
        break;
    }
}
