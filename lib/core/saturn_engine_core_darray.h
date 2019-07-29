// public
void saten_darr_init(saten_darr **sptr, size_t s)
{
    if (*sptr != NULL)
        saten_errhandler(13);
    *sptr = (saten_darr*)saten_malloc(sizeof(saten_darr));
    (*sptr)->size = s;
}

// public
int saten_darr_grow(saten_darr **sptr, int n)
{
    int i = (*sptr)->num;
    (*sptr)->num += n;
    (*sptr)->data = saten_realloc((*sptr)->data, (*sptr)->num * (*sptr)->size);
    return i; // return index of lowest new item
}

// public
/*
 * Removes items from the end
*/
void saten_darr_shrink(saten_darr **sptr, int n)
{
    (*sptr)->num -= n;
    (*sptr)->data = saten_realloc((*sptr)->data, (*sptr)->num * (*sptr)->size);
}
