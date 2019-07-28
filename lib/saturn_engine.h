#ifndef SATURN_ENGINE
#define SATURN_ENGINE
#include "core/saturn_engine_core.h"

// Globals
uint8_t saten_flags;

// Declarations
int saten_init(char *title, int w, int h, uint8_t flags);
int saten_run(void);
void saten_game(void);

// Engine Flags
#define SATEN_FULLSCREEN (1 << 7)

// Includes

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

    return 0; // everything okay!
}

// public
int saten_run(void)
{
    // main game loop is no longer user defined
    saten_core_run(saten_game); // have to write internal function
    return 0;
}

// private
void saten_game(void)
{
    // TODO traverse scenes bottom to top, user control only top scene
    if (saten_keystate[SDL_SCANCODE_ESCAPE])
        saten_break = true;
}
#endif /* SATURN_ENGINE */
