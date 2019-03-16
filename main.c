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
    if (saten_keystate[SDL_SCANCODE_ESCAPE]) {
        saten_break = true;
    }
    if (saten_key(SATEN_KEY_Y) >= 20)
        printf("%d\n", saten_key(SATEN_KEY_Y));
    static SDL_Rect player = { 0, 0, 12, 12 };
    static int step = 0;
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
