#ifndef SATURN_ENGINE_CORE_MFIELD
#define SATURN_ENGINE_CORE_MFIELD

saten_mfield saten_mfield_create(size_t size);
char* saten_mfield_take(saten_mfield *field, size_t size);
void saten_mfield_destroy(saten_mfield *field);
void saten_mfield_reset(saten_mfield *field);

#endif /* SATURN_ENGINE_CORE_MFIELD */
