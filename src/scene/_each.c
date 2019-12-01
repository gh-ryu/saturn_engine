/*
  Saturn Engine - Demo game
*/

#include "saturn_engine/_lib.h"
#include "_global.h"
#include "scene/_each.h"


void scene_each_init(void) // Runs after user init functions
{
}

void scene_each_update(bool c) // Runs after user update functions
{
    saten_sfx_play();
    saten_sfx_unset_all();
}

void scene_each_draw(void) // Runs after user draw functions
{
}

void scene_each_quit(void) // Runs after user quit functions
{
}
