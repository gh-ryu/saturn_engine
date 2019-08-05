#ifndef SATURN_ENGINE_CORE_UTIL
#define SATURN_ENGINE_CORE_UTIL

char* saten_get_filepath(const char *fn);
int saten_square(int a);
void saten_strcpy(char *str1, const char *str2);
void saten_strcat(char *str1, const char *str2);
struct tm* saten_localtime( const time_t *timer);
void saten_fopen(FILE **fp, const char *filename, const char *mode);
void* saten_malloc(size_t size);
void* saten_realloc(void* ptr, size_t size);
bool saten_test_rgb(uint8_t r, uint8_t g, uint8_t b, uint8_t t);
size_t saten_intlen(int a);

#endif /* SATURN_ENGINE_CORE_UTIL */
