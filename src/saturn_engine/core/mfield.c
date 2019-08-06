#include "saturn_engine/core/_lib.h"

saten_mfield saten_mfield_create(size_t size)
{
    saten_mfield mf;
    mf.ptr = saten_malloc(size); // number in bytes
    mf.capacity = size;
    return mf;
}

char* saten_mfield_take(saten_mfield *field, size_t size)
{
    char *ptr = field->ptr;
    for (int i = 0; i < size; i++)
        field->ptr++;
    return ptr;
}
