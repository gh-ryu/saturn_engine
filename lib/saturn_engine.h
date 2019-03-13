#ifndef SATEN_LIBRARY
#define SATEN_LIBRARY
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>
#include <string.h>
#include <stdbool.h>
#include "saten_structs.h"

int saten_init(const char *title, int screen_width, int screen_height);
int saten_run();
char *saten_base_path;
saten_pad *saten_pads;

SDL_Window *saten_window;

int saten_init(const char *title, int screen_width, int screen_height)
{
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO |
                SDL_INIT_GAMECONTROLLER)<0) {
        //TODO error stuff
        return -1;
    }

    if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
        //TODO error stuff
        return -1;
    }

    if (TTF_Init() < 0) {
        //TODO error stuff
        return -1;
    }

    if ((saten_window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED,
                    SDL_WINDOWPOS_UNDEFINED, screen_width, screen_height,
                    SDL_WINDOW_SHOWN)) == NULL) {
        //TODO error
        return -1;
    }

    // not implementing renderer for full control

    if (!(saten_base_path = SDL_GetBasePath())) {
        //TODO error
        return -1;
    }

    int pad_cnt = SDL_NumJoysticks();
    if (pad_cnt >= 1) {
        saten_pads = (saten_pad*) realloc(saten_pads, pad_cnt*
                sizeof(saten_pad));
        for (int i = 0; i < pad_cnt; ++i) {
            if (SDL_IsGameController(i)) {
                saten_pads[i-1].dev = SDL_GameControllerOpen(i);
                if (saten_pads[i-1].dev == NULL) {
                    //TODO error but no break, failed opening controller
                }
            }
        }
    }



    // no problems
    return 0;
    
}

#endif /* SATEN_LIBRARY */
