/*
  Saturn Engine - Demo program
*/

#include "lib/saturn_engine.h"

void game(void);
int main (int argc, char *argv[])
{
    if(saten_init("Saturn Engine Demo", 320, 240,SATEN_ERRORS|SATEN_INPUT)<0) {
        fprintf(stderr, "Init error...\n");
    }

    saten_fptr_run fptr_run = game;

    saten_run(fptr_run);




    return 0;
 
}

void game(void)
{
    static SDL_Rect player = { 0, 0, 12, 12 };
    static int step = 0;
    if (saten_keystate[SDL_SCANCODE_ESCAPE]) {
        saten_break = true;
    }

    /*
    for (int i = 0; i < 20; i++) {
        if (SDL_JoystickGetButton(saten_pads[0].jdev, i))
            printf("%d\n", i);
    }
    for (int i = 0; i < 20; i++) {
        if (SDL_JoystickGetAxis(saten_pads[0].jdev, i))
            printf("%d\n", i);
    }
    */
    /*
    for (int i = 0; i < 20; i++) {
        if (SDL_JoystickGetButton(
                    SDL_GameControllerGetJoystick(saten_pads[0].dev), i))
            printf("%d\n", i);
    }
    */

    /*
    if (step == 120) {
        saten_rumble(0, 1.0, 1200);
    }
    */

    /*
    if(saten_pads[0].lang)
        printf("left angle: %f\n", saten_pads[0].lang);
    if(saten_pads[0].rang)
        printf("right angle: %f\n", saten_pads[0].rang);
        */
    if (saten_btn(SATEN_AXS_LX, 0) > 0)
        printf("lx: %d\n", saten_btn(SATEN_AXS_LX, 0));
    if (saten_btn(SATEN_AXS_LY, 0) > 0)
        printf("ly: %d\n", saten_btn(SATEN_AXS_LY, 0));
    if (saten_btn(SATEN_AXS_RX, 0) > 0)
        printf("rx: %d\n", saten_btn(SATEN_AXS_RX, 0));
    if (saten_btn(SATEN_AXS_RY, 0) > 0)
        printf("ry: %d\n", saten_btn(SATEN_AXS_RY, 0));

    if (saten_btn(SATEN_BTN_INV, 0) > 1)
        printf("btn inv: %d\n", saten_btn(SATEN_BTN_INV, 0));
    if (saten_btn(SATEN_BTN_1, 0) > 1)
        printf("btn1: %d\n", saten_btn(SATEN_BTN_1, 0));
    if (saten_btn(SATEN_BTN_2, 0) > 1)
        printf("btn2: %d\n", saten_btn(SATEN_BTN_2, 0));
    if (saten_btn(SATEN_BTN_3, 0) > 1)
        printf("btn3: %d\n", saten_btn(SATEN_BTN_3, 0));
    if (saten_btn(SATEN_BTN_4, 0) > 1)
        printf("btn4: %d\n", saten_btn(SATEN_BTN_4, 0));
    if (saten_btn(SATEN_BTN_SELECT, 0) > 1)
        printf("select: %d\n", saten_btn(SATEN_BTN_SELECT, 0));
    if (saten_btn(SATEN_BTN_HOME, 0) > 1)
        printf("home: %d\n", saten_btn(SATEN_BTN_HOME, 0));
    if (saten_btn(SATEN_BTN_START, 0) > 1)
        printf("start: %d\n", saten_btn(SATEN_BTN_START, 0));
    if (saten_btn(SATEN_BTN_LSTICK, 0) > 1)
        printf("lstick: %d\n", saten_btn(SATEN_BTN_LSTICK, 0));
    if (saten_btn(SATEN_BTN_RSTICK, 0) > 1)
        printf("rstick: %d\n", saten_btn(SATEN_BTN_RSTICK, 0));
    if (saten_btn(SATEN_BTN_LS, 0) > 1)
        printf("lshould: %d\n", saten_btn(SATEN_BTN_LS, 0));
    if (saten_btn(SATEN_BTN_RS, 0) > 1)
        printf("rshould: %d\n", saten_btn(SATEN_BTN_RS, 0));
    if (saten_btn(SATEN_BTN_DPAD_UP, 0) > 1)
        printf("up: %d\n", saten_btn(SATEN_BTN_DPAD_UP, 0));
    if (saten_btn(SATEN_BTN_DPAD_DOWN, 0) > 1)
        printf("down: %d\n", saten_btn(SATEN_BTN_DPAD_DOWN, 0));
    if (saten_btn(SATEN_BTN_DPAD_LEFT, 0) > 1)
        printf("left: %d\n", saten_btn(SATEN_BTN_DPAD_LEFT, 0));
    if (saten_btn(SATEN_BTN_DPAD_RIGHT, 0) > 1)
        printf("right: %d\n", saten_btn(SATEN_BTN_DPAD_RIGHT, 0));
    if (saten_btn(SATEN_BTN_MAX, 0) > 1)
        printf("max: %d\n", saten_btn(SATEN_BTN_MAX, 0));

    if (saten_key(SATEN_KEY_Y) >= 20)
        printf("%d\n", saten_key(SATEN_KEY_Y));

    SDL_Surface *test = IMG_Load("test.png");
    SDL_Texture *txtr = SDL_CreateTextureFromSurface(saten_ren, test);
    SDL_SetRenderDrawColor(saten_ren, 155, 225, 200, 255);
    SDL_RenderFillRect(saten_ren, NULL);
    SDL_SetTextureColorMod(txtr, 255, 255, 255);
    SDL_RenderCopy(saten_ren, txtr, NULL, NULL);
    SDL_SetRenderDrawColor(saten_ren, 255, 225, 255, 255);
    player.x += 1;
    SDL_RenderFillRect(saten_ren, &player);

    SDL_FreeSurface(test);
    SDL_DestroyTexture(txtr);
    step++;
}
