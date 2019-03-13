/*
  Saturn Engine - Demo program
*/

#include "lib/saturn_engine.h"

void game(void);
int main (int argc, char *argv[])
{
    if(saten_init("Saturn Engine Demo", 320, 240)<0) {
        // TODO error
        printf("Init error...\n");
    }

    saten_fptr_run fptr_run = game;

    saten_run(fptr_run);




    return 0;
 
}

void game(void)
{
    SDL_Surface *test = IMG_Load("test.png");
    SDL_Texture *txtr = SDL_CreateTextureFromSurface(saten_ren, test);
    SDL_SetRenderDrawColor(saten_ren, 155, 225, 200, 255);
    SDL_RenderFillRect(saten_ren, NULL);
    SDL_SetTextureColorMod(txtr, 255, 255, 255);
    SDL_RenderCopy(saten_ren, txtr, NULL, NULL);

    SDL_FreeSurface(test);
    SDL_DestroyTexture(txtr);
}
