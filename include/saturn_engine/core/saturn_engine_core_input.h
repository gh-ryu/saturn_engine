#ifndef SATURN_ENGINE_CORE_INPUT
#define SATURN_ENGINE_CORE_INPUT

#include "saturn_engine_core_input_header.h"
#include "saturn_engine_core_keyboard.h"
#include "saturn_engine_core_controller.h"

// public
bool saten_input_check(void)
{
    // Is there any input?
    for (int i = 0; i < SATEN_KEYNUM; i++)
        if (saten_keystate2[i] > 0)
            return true;

    for (int i = 0; i < saten_pad_num; i++)
        for (int j = 0; j < 25; j++)
            if (saten_pads[i].state[j] > 0)
                return true;


    return false;
}

#endif /* SATURN_ENGINE_CORE_INPUT */
