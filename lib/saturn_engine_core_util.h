// public
char* saten_get_filepath(const char *fn)
{
    char *res =
        (char*)malloc(strlen(saten_base_path)+1+strlen(fn));
    if (res == NULL) {
        return NULL;
    }
    saten_strcpy(res, saten_base_path);
    saten_strcat(res, fn);
    return res;
}

void* saten_malloc(size_t size)
{
    void *ptr = NULL;
    ptr = malloc(size);
    if (ptr == NULL) {
        saten_errhandler(7);
    } else {
        memset(ptr, 0, size);
    }
    return ptr;
}

// private
int saten_square(int a)
{
    return a * a;
}

void saten_strcpy(char *str1, const char *str2)
{
#ifdef _WIN32
    strcpy_s(str1, strlen(str2)+1, str2);
#else
    strcpy(str1, str2);
#endif
}

void saten_strcat(char *str1, const char *str2)
{
#ifdef _WIN32
    strcat_s(str1, strlen(str1)+strlen(str2)+1, str2);
#else
    strcat(str1, str2);
#endif
}

struct tm* saten_localtime( const time_t *timer)
{
#ifdef _WIN32
    struct tm *tm = (struct tm*)saten_malloc(sizeof(struct tm));
    localtime_s(tm, timer);
    return tm;
#else
    // not thread safe as localtime uses a single internal buffer
    return localtime(timer);
#endif
}

void saten_fopen(FILE **fp, const char *filename, const char *mode)
{
    //FIXME error checking
#ifdef _WIN32
    fopen_s(fp, filename, mode);
#else
    *fp = fopen(filename, mode);
#endif
}
