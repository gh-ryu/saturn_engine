#include "saturn_engine/_lib.h"
#include "_global.h"
#include "scene/title.h"
#include "input.h"

//static bool jumptomaptest;
static saten_menu *menu;

static saten_object bg;

void scene_title_init(void)
{
    saten_key_lock(-1); // Lock all keys
    saten_sprite_texturize(RES(IMG_TITLE_BACKGROUND));
    int w = saten_get_text_width(RES(TEXT_TITLE_PROMPT_KEYB));

    // +1 is language modifier (assumed scenario)
    saten_text_posw(RES(TEXT_TITLE_PROMPT_KEYB+1), 320/2 - w/2, 200);

    // saten_bgm_posw(6.3);
    saten_bgmplay(RES(BGM_DEMO_TITLE));

    // Menu test
    menu = saten_menu_create(SATEN_MENU_MATR, SATEN_MENU_LEFT,
            20, 20, SATEN_MENU_LOOP);

    //saten_menu_icon_offsetw(menu, 0, 12); // Vert menu
    //saten_menu_icon_offsetw(menu, 12, 0); // Hori menu
    saten_menu_matrixs(menu, 3, 2);
    saten_menu_pads(menu, 64, 16);
    saten_menu_frames(menu, 1, 1);

    saten_menu_element_add(menu, RES(TEXT_TITLE_MENU_GAME),
                SATEN_MENU_TEXT);
    saten_menu_element_add(menu, RES(TEXT_TITLE_MENU_SHOP),
                SATEN_MENU_TEXT);
    saten_menu_element_add(menu, RES(TEXT_TITLE_MENU_SCORE),
                SATEN_MENU_TEXT);
    saten_menu_element_add(menu, RES(TEXT_TITLE_MENU_SETTING),
                SATEN_MENU_TEXT);
    saten_menu_element_add(menu, RES(TEXT_TITLE_MENU_REPLAY),
                SATEN_MENU_TEXT);
    saten_menu_element_add(menu, RES(TEXT_TITLE_MENU_QUIT),
                SATEN_MENU_TEXT);

    //saten_menu_max(menu, 3);
    //saten_menu_intervalw(menu, 20);
    saten_menu_toggle(menu); // Turn menu on
    saten_menu_element_toggle(menu, 4); // Replay turned off..

    saten_object_set_sprite(&bg, RES(IMG_TITLE_BACKGROUND));
    saten_scene_start(saten_scene_self());
}

void scene_title_update(bool c)
{
    // unlock buttons when user stopped giving input for even a frame
    if (!saten_input_check())
        saten_key_unlock(-1);
    // or unlock buttons after a number of frames
    if (saten_scene_frame_count() >= 260)
        saten_key_unlock(-1);
    if (c) {
        if (input(cancel) == 1) {
            saten_key_lock(-1);
            saten_scene_quit_from(saten_scene_self());
        }

        saten_menu_update(menu);
    }
}

void scene_title_draw(void)
{
    saten_object_draw(&bg);
    saten_text_draw(RES(TEXT_TITLE_PROMPT_PAD));
    saten_menu_draw(menu);
}

void scene_title_quit(void)
{
    saten_bgmstop();
}
