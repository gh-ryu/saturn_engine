#include "saturn_engine/core/_lib.h"

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

// public
void* saten_malloc(size_t size)
{
    void *ptr = NULL;
    ptr = malloc(size);
    if (ptr == NULL) {
        saten_killf = true;
        saten_errhandler(7);
    } else {
        memset(ptr, 0, size);
    }
    return ptr;
}

// public
char* saten_strclone(char *str)
{
    int l = strlen(str) + 1;
    char *newstr = saten_malloc(l * sizeof(char));
    return (char*) memcpy(newstr, str, l);
}

// public
void* saten_realloc(void* ptr, size_t size)
{
    ptr = realloc(ptr, size);
    if (ptr == NULL) {
        saten_killf = true;
        saten_errhandler(7);
    }
    return ptr;
}

// public
bool saten_test_rgb(uint8_t r, uint8_t g, uint8_t b, uint8_t t)
{
    return (r == t && g == t && b == t);
}

// public
// https://stackoverflow.com/a/3068420
size_t saten_intlen(int a)
{
    int8_t add = 1;
    if (a < 0)
        add += 1;
    if (a == 0)
        return 1;
    else
        return floor(log10(abs(a))) + add;
}

// private
int saten_square(int a)
{
    return a * a;
}

// private
void saten_strcpy(char *str1, const char *str2)
{
#ifdef _WIN32
    strcpy_s(str1, strlen(str2)+1, str2);
#else
    strcpy(str1, str2);
#endif
}

// private
void saten_strcat(char *str1, const char *str2)
{
#ifdef _WIN32
    strcat_s(str1, strlen(str1)+strlen(str2)+1, str2);
#else
    strcat(str1, str2);
#endif
}

// private
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

// private
void saten_fopen(FILE **fp, const char *filename, const char *mode)
{
    //FIXME error checking
#ifdef _WIN32
    fopen_s(fp, filename, mode);
#else
    *fp = fopen(filename, mode);
#endif
    if (*fp == NULL)
        saten_errhandler(39);
}
