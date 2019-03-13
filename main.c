/*
  Saturn Engine - Demo program
*/

#include "lib/saturn_engine.h"

void testfunc();
int main (int argc, char *argv[])
{
    if(saten_init("Saturn Engine Demo", 320, 240)<0) {
        // TODO error
        printf("Init error...\n");
    }
    SDL_Delay(1200);
    return 0;
 
}
