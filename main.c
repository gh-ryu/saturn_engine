/*
  Saturn Engine Core - Demo program
*/

#include "lib/saturn_engine_core.h"

saten_sprite *sprite;
saten_sprite *sprite_copy;
saten_sprite *spplayer;
saten_sprite *arrow;
saten_sprite *m7;
saten_layer* layer1 = NULL;
saten_layer* layer2 = NULL;
saten_layer* layer3 = NULL;
saten_layer* layer4 = NULL;
saten_layer* layer5 = NULL;
saten_layer* layer6 = NULL;

void game(void);
int main (int argc, char *argv[])
{
    if(saten_core_init("Saturn Engine Core", 320, 240,SATEN_ERRORS|SATEN_INPUT)
            <0) {
        fprintf(stderr, "Init error...\n");
    }
    layer1 = saten_layer_create(320, 240);
    layer2 = saten_layer_create(320, 240);
    layer3 = saten_layer_create(320, 240);
    layer4 = saten_layer_create(320, 240);
    layer5 = saten_layer_create(320, 240);
    layer6 = saten_layer_create(320, 240);

    saten_fptr_run fptr_run = game;

    sprite = saten_sprite_load("test.png");
    spplayer = saten_sprite_load("spritesheet_test.png");
    sprite_copy = saten_sprite_copy(sprite);
    //saten_sprite_colorize(sprite_copy, 255, 255, 255);
    saten_sprite_patternize0(sprite_copy);
    arrow = saten_sprite_load("arrow.png");
    saten_sprite_texturize(sprite);
    saten_sprite_texturize(spplayer);
    saten_sprite_texturize(sprite_copy);
    saten_sprite_texturize(arrow);
    saten_sprite_set_tiles(spplayer, 4, 3);


    saten_core_run(fptr_run);

    saten_sprite_destroy(sprite);
    saten_sprite_destroy(sprite_copy);
    saten_sprite_destroy(arrow);



    return 0;
 
}

void game(void)
{
    static SDL_Rect player = { 0, 0, 12, 12 };
    static int step = 0;
    static int decide = 0;
    static int tile = 0;

    if (saten_keystate[SDL_SCANCODE_ESCAPE]) {
        saten_break = true;
    }

    saten_layer_clear_all();

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
    for (int i = 0; i < saten_pad_num; i++) {
    if (saten_btn(SATEN_AXS_LX, i) > 0)
        printf("lx: %d\n", saten_btn(SATEN_AXS_LX, i));
    if (saten_btn(SATEN_AXS_LY, i) > 0)
        printf("ly: %d\n", saten_btn(SATEN_AXS_LY, i));
    if (saten_btn(SATEN_AXS_RX, i) > 0)
        printf("rx: %d\n", saten_btn(SATEN_AXS_RX, i));
    if (saten_btn(SATEN_AXS_RY, i) > 0)
        printf("ry: %d\n", saten_btn(SATEN_AXS_RY, i));

    if (saten_btn(SATEN_BTN_INV, i) > 1)
        printf("btn inv: %d\n", saten_btn(SATEN_BTN_INV, i));
    if (saten_btn(SATEN_BTN_1, i) > 1)
        printf("btn1: %d\n", saten_btn(SATEN_BTN_1, i));
    if (saten_btn(SATEN_BTN_2, i) > 1)
        printf("btn2: %d\n", saten_btn(SATEN_BTN_2, i));
    if (saten_btn(SATEN_BTN_3, i) > 1)
        printf("btn3: %d\n", saten_btn(SATEN_BTN_3, i));
    if (saten_btn(SATEN_BTN_4, i) > 1)
        printf("btn4: %d\n", saten_btn(SATEN_BTN_4, i));
    if (saten_btn(SATEN_BTN_SELECT, i) > 1)
        printf("select: %d\n", saten_btn(SATEN_BTN_SELECT, i));
    if (saten_btn(SATEN_BTN_HOME, i) > 1)
        printf("home: %d\n", saten_btn(SATEN_BTN_HOME, i));
    if (saten_btn(SATEN_BTN_START, i) > 1)
        printf("start: %d\n", saten_btn(SATEN_BTN_START, i));
    if (saten_btn(SATEN_BTN_LSTICK, i) > 1)
        printf("lstick: %d\n", saten_btn(SATEN_BTN_LSTICK, i));
    if (saten_btn(SATEN_BTN_RSTICK, i) > 1)
        printf("rstick: %d\n", saten_btn(SATEN_BTN_RSTICK, i));
    if (saten_btn(SATEN_BTN_LS, i) > 1)
        printf("lshould: %d\n", saten_btn(SATEN_BTN_LS, i));
    if (saten_btn(SATEN_BTN_RS, i) > 1)
        printf("rshould: %d\n", saten_btn(SATEN_BTN_RS, i));
    if (saten_btn(SATEN_BTN_DPAD_UP, i) > 1)
        printf("up: %d\n", saten_btn(SATEN_BTN_DPAD_UP, i));
    if (saten_btn(SATEN_BTN_DPAD_DOWN, i) > 1)
        printf("down: %d\n", saten_btn(SATEN_BTN_DPAD_DOWN, i));
    if (saten_btn(SATEN_BTN_DPAD_LEFT, i) > 1)
        printf("left: %d\n", saten_btn(SATEN_BTN_DPAD_LEFT, i));
    if (saten_btn(SATEN_BTN_DPAD_RIGHT, i) > 1)
        printf("right: %d\n", saten_btn(SATEN_BTN_DPAD_RIGHT, i));
    if (saten_btn(SATEN_BTN_MAX, i) > 1)
        printf("max: %d\n", saten_btn(SATEN_BTN_MAX, i));
    }

    if (saten_key(SATEN_KEY_Y) >= 20)
        printf("%d\n", saten_key(SATEN_KEY_Y));

    //SDL_Surface *test = IMG_Load("test.png");
    //SDL_Texture *txtr = SDL_CreateTextureFromSurface(saten_ren, test);

    //SDL_SetRenderDrawColor(saten_ren, 155, 225, 200, 255);
    //SDL_RenderFillRect(saten_ren, NULL);
    saten_draw_rect_filled(0, 0, 320, 240, 155, 225, 200, 255,
            SDL_BLENDMODE_NONE);

    //saten_sprite_scale(sprite, 0.5f);
    saten_sprite_scale(sprite_copy, 1.0f);


    if (step % 6 == 0) {
        if (decide) 
            decide = 0;
        else
            decide = 1;
        if (tile < 11)
            tile++;
        else
            tile = 0;
    }

    saten_sprite_repeat(sprite_copy, 0, 0, 0, 320, 240);

    player.x += 1;

    saten_set_target_layer(NULL);
    saten_draw_rect_filled(player.x, player.y, player.w, player.h,
            255, 255, 255, 255, SDL_BLENDMODE_NONE);

    //saten_draw_rect_filled(0, 0, 320, 240, 0, 0, 0, 255, SDL_BLENDMODE_NONE);
    spplayer->centered = true;
    saten_sprite_draw(spplayer, tile, 160, 120, -1, false);


    //SDL_FreeSurface(test);
    //SDL_DestroyTexture(txtr);
    step++;
}
