#ifndef SATURN_ENGINE_OBJECT
#define SATURN_ENGINE_OBJECT

void saten_object_init(saten_object *obj);
void saten_object_set_sprite(saten_object *obj, saten_sprite *spr);
void saten_object_update(saten_object *obj);
void saten_object_draw(saten_object *obj);
void saten_object_fadein(saten_object *obj, int frames);

#endif /* SATURN_ENGINE_OBJECT */
