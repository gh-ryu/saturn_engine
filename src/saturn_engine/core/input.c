#include "saturn_engine/core/_lib.h"

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
