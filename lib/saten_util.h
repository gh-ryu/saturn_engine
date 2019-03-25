char* saten_get_filepath(const char* fn)
{
    char *res =
        (char*) malloc(strlen(saten_base_path)+1+strlen(fn));
    if (res == NULL) {
        return NULL;
    }
    strcpy(res, saten_base_path);
    strcat(res, fn);
    return res;
}

int saten_square(int a)
{
    return a * a;
}

uint32_t saten_get_surface_pixel(uint32_t *pixels, int x, int y, int w)
{
    printf("index %d\n", y*w+x);
    return pixels[y*w+x];
}
