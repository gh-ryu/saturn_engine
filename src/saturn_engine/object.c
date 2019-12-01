#include "saturn_engine/_lib.h"

void saten_object_init(saten_object *obj)
{
}

void saten_object_set_sprite(saten_object *obj, saten_sprite *spr)
{
    obj->sprite = spr;
    obj->mods.r = 255;
    obj->mods.g = 255;
    obj->mods.b = 255;
    obj->mods.a = 255;
}

void saten_object_update(saten_object *obj)
{
}

void saten_object_fadein(saten_object *obj, int frames)
{
    obj->fadein_cnt++;
}

void saten_object_draw(saten_object *obj)
{
    if (obj->mods.a != obj->sprite->mods.a)
        saten_sprite_alphamod(obj->sprite, obj->mods.a, SATEN_TEXTURE);
    saten_sprite_draw(obj->sprite, 0, 0, 0, -1, false);
}
