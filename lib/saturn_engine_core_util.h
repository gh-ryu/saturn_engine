// public
char* saten_get_filepath(const char *fn)
{
    char *res =
        (char*) malloc(strlen(saten_base_path)+1+strlen(fn));
    if (res == NULL) {
        return NULL;
    }
    saten_strcpy(res, saten_base_path);
    saten_strcat(res, fn);
    return res;
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
    struct tm *tm = malloc(sizeof(struct tm));
    if (tm == NULL)
        saten_errhandler(7);
    memset(tm, 0, sizeof(struct tm));
    localtime_s(tm, timer);
    return tm;
#else
    // not thread safe as localtime uses a single internal buffer
    return localtime(timer);
#endif
}

FILE* saten_fopen(const char *filename, const char *mode)
{
#ifdef _WIN32
    FILE *fp = malloc(sizeof(FILE));
    if (fp == NULL)
        saten_errhandler(7);
    memset(fp, 0, sizeof(FILE));
    fopen_s(fp, filename, mode);
    return fp;
#else
    return fopen(filename, mode);
#endif
}
