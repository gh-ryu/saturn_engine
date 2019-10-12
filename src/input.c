/*
  Saturn Engine - Demo game
*/

#include "saturn_engine/_lib.h"
#include "_global.h"
#include "input.h"

static int player;
static inputcntr p1inp; // controller inputs
static inputcntr p2inp;
static inputcntr p1inpkb; // keyboad inputs
static inputcntr p2inpkb;

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

void input_set(uint8_t **btn, uint8_t **key) /* PRIVATE */
{
    switch (player) {
    case 1:
        *btn = (uint8_t*)&p1inp;
        *key = (uint8_t*)&p1inpkb;
        break;
    case 2:
        *btn = (uint8_t*)&p2inp;
        *key = (uint8_t*)&p2inpkb;
        break;
    }
}

/* INPUT HANDLER */

void input_playerw(int id) /* PUBLIC */
{
    /* Defines from which player to read inputs */
    player = id;
}

int input_keyr(enum inputs i) /* PUBLIC */
{
    uint8_t *btn = NULL;
    uint8_t *key = NULL;
    input_set(&btn, &key);
    return key[i];
}

int input_btnr(enum inputs i) /* PUBLIC */
{
    uint8_t *btn = NULL;
    uint8_t *key = NULL;
    input_set(&btn, &key);
    return btn[i];
}

uint32_t input(enum inputs i) /* PUBLIC */
{
    //inputcntr *btn = NULL;
    //inputcntr *key = NULL;
    uint8_t *btn = NULL;
    uint8_t *key = NULL;
    input_set(&btn, &key);
    uint32_t rv;
    switch (i) {
    // Check analog inputs too
    case up:
    case down:
    case left:
    case right:
    default:
        if ((rv = saten_player_keyr(player, key[i])) < 1)
            rv = saten_player_btnr(player, btn[i]);
        break;
        /*
    case accept:
        if ((rv = saten_player_keyr(player, key->accept)) < 1)
            rv = saten_player_btnr(player, btn->accept);
        break;
    case cancel:
        if ((rv = saten_player_keyr(player, key->cancel)) < 1)
            rv = saten_player_btnr(player, btn->cancel);
        break;
    case pause:
        if ((rv = saten_player_keyr(player, key->pause)) < 1)
            rv = saten_player_btnr(player, btn->pause);
        break;
    case mainshot:
        if ((rv = saten_player_keyr(player, key->mainshot)) < 1)
            rv = saten_player_btnr(player, btn->mainshot);
        break;
    case subshot:
        if ((rv = saten_player_keyr(player, key->subshot)) < 1)
            rv = saten_player_btnr(player, btn->subshot);
        break;
        */
    }
    return rv;
}
