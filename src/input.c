/*
  Saturn Engine - Demo game
*/

#include "saturn_engine/_lib.h"
#include "_global.h"
#include "input.h"

int player;

/* MAPPING HANDLER */

void input_init(void) /* PUBLIC */
{
    // Default mappings
    inputcntr def = {
        SATEN_BTN_1,
        SATEN_BTN_2,
        SATEN_BTN_START,
        SATEN_BTN_1,
        SATEN_BTN_2,
        SATEN_BTN_DPAD_UP,
        SATEN_BTN_DPAD_DOWN,
        SATEN_BTN_DPAD_RIGHT,
        SATEN_BTN_DPAD_LEFT,
        SATEN_BTN_RS,
        SATEN_BTN_LS
    };
    inputcntr defkb = {
        SATEN_KEY_ENTER,
        SATEN_KEY_ESC,
        SATEN_KEY_SPACE,
        SATEN_KEY_Z,
        SATEN_KEY_X,
        SATEN_KEY_UP,
        SATEN_KEY_DOWN,
        SATEN_KEY_RIGHT,
        SATEN_KEY_LEFT,
        SATEN_KEY_A,
        SATEN_KEY_C
    };

    p1inp = def;
    p2inp = def;
    p1inpkb = defkb;
    p2inpkb = defkb;

    // Load mappings if available
    input_load_mappings("demo_data/p1inp.dat", &p1inp);
    input_load_mappings("demo_data/p2inp.dat", &p2inp);
    input_load_mappings("demo_data/p1inpkb.dat", &p1inpkb);
    input_load_mappings("demo_data/p2inpkb.dat", &p2inpkb);
}

void input_save_all_mappings(void) /* PUBLIC */
{
    input_save_mappings("demo_data/p1inp.dat", &p1inp);
    input_save_mappings("demo_data/p2inp.dat", &p2inp);
    input_save_mappings("demo_data/p1inpkb.dat", &p1inpkb);
    input_save_mappings("demo_data/p2inpkb.dat", &p2inpkb);
}

void input_save_mappings(char *fn, inputcntr *inp) /* PRIVATE */
{
    if (saten_data_save_init(fn, true) != -1) {
        saten_data_save_uint8(inp->accept);
        saten_data_save_uint8(inp->cancel);
        saten_data_save_uint8(inp->pause);
        saten_data_save_uint8(inp->mainshot);
        saten_data_save_uint8(inp->subshot);
        saten_data_save_uint8(inp->up);
        saten_data_save_uint8(inp->down);
        saten_data_save_uint8(inp->right);
        saten_data_save_uint8(inp->left);
        saten_data_save_uint8(inp->switchwpn);
        saten_data_save_uint8(inp->slow);
    }
}

void input_load_mappings(char *fn, inputcntr *inp) /* PRIVATE */
{
    if (saten_data_load_init(fn, true) != -1) {
        saten_data_load_uint8(&inp->accept);
        saten_data_load_uint8(&inp->cancel);
        saten_data_load_uint8(&inp->pause);
        saten_data_load_uint8(&inp->mainshot);
        saten_data_load_uint8(&inp->subshot);
        saten_data_load_uint8(&inp->up);
        saten_data_load_uint8(&inp->down);
        saten_data_load_uint8(&inp->right);
        saten_data_load_uint8(&inp->left);
        saten_data_load_uint8(&inp->switchwpn);
        saten_data_load_uint8(&inp->slow);
        saten_data_load_quit();
    }
}

/* INPUT HANDLER */

void input_playerw(int id) /* PUBLIC */
{
    /* Defines from which player to read inputs */
    player = id;
}

