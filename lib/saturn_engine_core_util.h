// public
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

// private
int saten_square(int a)
{
    return a * a;
}

