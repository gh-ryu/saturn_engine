#include "saturn_engine/core/_lib.h"

saten_mfield saten_mfield_create(size_t size)
{
    saten_mfield mf;
    mf.ptr = saten_malloc(size); // number in bytes
    mf.capacity = size;
    mf.volume = 0;
    return mf;
}

char* saten_mfield_take(saten_mfield *field, size_t size)
{
    if (size > field->capacity)
        return NULL;
    // move pointer back to origin if requested size causes overflow
    if (field->volume + size > field->capacity)
        saten_mfield_reset(field);
    char *ptr = field->ptr;
    field->ptr += size;
    field->volume += size;
    //for (int i = 0; i < size; i++)
    //    field->ptr++;
    return ptr;
}

void saten_mfield_destroy(saten_mfield *field)
{
    saten_mfield_reset(field);
    if (field->ptr)
        free(field->ptr);
    field->ptr = NULL;
}


// private
void saten_mfield_reset(saten_mfield *field)
{
    field->ptr = field->ptr - field->volume ;
    field->volume = 0;
}
