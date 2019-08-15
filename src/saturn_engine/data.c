#include "saturn_engine/_lib.h"

FILE *f;

bool secure;
char *dfilepath;
SDL_RWops *data;
uint8_t fendian_flag;
uint8_t cpuendian_flag;
size_t fintsize;
size_t cpuintsize;
uint64_t checksum;

// public
int saten_data_save_init(char *fp, bool is_secure)
{
    saten_data_init(fp, is_secure);
    data = SDL_RWFromFile("saturn_engine_data/tmp.dat", "wb");
    if (data == NULL) {
        saten_errhandler(52);
        return -1;
    }
    SDL_RWwrite(data, &cpuendian_flag, sizeof(uint8_t), 1);
    SDL_RWwrite(data, &cpuintsize, sizeof(size_t), 1);
    saten_data_save_string("SaturnEngineData");
    return 0;
}

// public
int saten_data_load_init(char *fp, bool is_secure)
{
    saten_data_init(fp, is_secure);
    data = SDL_RWFromFile(dfilepath, "rb");
    if (data == NULL)
        return -1;
    char *str;
    SDL_RWread(data, &fendian_flag, sizeof(uint8_t), 1);
    SDL_RWread(data, &fintsize, sizeof(size_t), 1);
    saten_data_load_string(&str);
    if (strncmp(str, "SaturnEngineData", 17) != 0) {
        saten_errhandler(51);
        return -1;
    }
    if (cpuintsize != fintsize) {
        saten_errhandler(50); // shouldn't even be a problem though
        return -1;
    }
    return 0;
}

// private
void saten_data_init(char *fp, bool is_secure)
{
    if (is_secure)
        secure = true;
    dfilepath = saten_strclone(fp);
    if (SDL_BYTEORDER == SDL_LIL_ENDIAN)
        cpuendian_flag = 0;
    if (SDL_BYTEORDER == SDL_BIG_ENDIAN)
        cpuendian_flag = 1;
    cpuintsize = sizeof(int);
}

// private
void saten_data_quit(void)
{
    cpuendian_flag = 0;
    fendian_flag = 0;
    free(dfilepath);
    SDL_RWclose(data);
    data = NULL;
    dfilepath = NULL;
    secure = false;
    checksum = 0;
}

// public
int saten_data_save_quit(void)
{
    if (secure) {
        saten_data_hash_checksum();
        SDL_RWwrite(data, &checksum, sizeof(uint64_t), 1);
    }
    
    if (rename("saturn_engine_data/tmp.dat", dfilepath) < -1) {
        saten_errhandler(49);
        saten_data_quit();
        return -1;
    }
    saten_data_quit();
    return 0;
}

// public
int saten_data_load_quit(void)
{
    if (secure) {
        uint64_t fchecksum;
        saten_data_load_uint64(&fchecksum);
        if (checksum != fchecksum) {
            saten_data_quit();
            return -1;
        }
    }
    saten_data_quit();
    return 0;
}

void saten_data_save_float(float f)
{
    SDL_RWwrite(data, &f, sizeof(float), 1);
    if (secure)
        checksum += ceilf(f);
}

void saten_data_load_float(float *f)
{
    SDL_RWread(data, f, sizeof(float), 1);
    if (cpuendian_flag != fendian_flag)
        *f = SDL_SwapFloat(*f);
    if (secure)
        checksum += ceilf(*f);
}

void saten_data_save_int(int i)
{
    SDL_RWwrite(data, &i, sizeof(int), 1);
    if (secure)
        checksum += i;
}

void saten_data_save_int8(int8_t i)
{
    SDL_RWwrite(data, &i, sizeof(int8_t), 1);
    if (secure)
        checksum += i;
}

void saten_data_save_uint8(uint8_t i)
{
    SDL_RWwrite(data, &i, sizeof(uint8_t), 1);
    if (secure)
        checksum += i;
}

void saten_data_save_int16(int16_t i)
{
    SDL_RWwrite(data, &i, sizeof(int16_t), 1);
    if (secure)
        checksum += i;
}

void saten_data_save_uint16(uint16_t i)
{
    SDL_RWwrite(data, &i, sizeof(uint16_t), 1);
    if (secure)
        checksum += i;
}

void saten_data_save_int32(int32_t i)
{
    SDL_RWwrite(data, &i, sizeof(int32_t), 1);
    if (secure)
        checksum += i;
}

void saten_data_save_uint32(uint32_t i)
{
    SDL_RWwrite(data, &i, sizeof(uint32_t), 1);
    if (secure)
        checksum += i;
}

void saten_data_save_int64(int64_t i)
{
    SDL_RWwrite(data, &i, sizeof(int64_t), 1);
    if (secure)
        checksum += i;
}

void saten_data_save_uint64(uint64_t i)
{
    SDL_RWwrite(data, &i, sizeof(uint64_t), 1);
    if (secure)
        checksum += i;
}

void saten_data_load_int(int *i)
{
    SDL_RWread(data, i, sizeof(int), 1);
    if (cpuendian_flag != fendian_flag) {
        switch (cpuintsize) {
        case 2:
            *i = SDL_Swap16(*i);
            break;
        case 4:
            *i = SDL_Swap32(*i);
            break;
        case 8:
            *i = SDL_Swap64(*i);
            break;
        }
    }
    if (secure)
        checksum += *i;
}

void saten_data_load_int8(int8_t *i)
{
    SDL_RWread(data, i, sizeof(int8_t), 1);
    if (secure)
        checksum += *i;
}

void saten_data_load_uint8(uint8_t *i)
{
    SDL_RWread(data, i, sizeof(uint8_t), 1);
    if (secure)
        checksum += *i;
}

void saten_data_load_int16(int16_t *i)
{
    SDL_RWread(data, i, sizeof(int16_t), 1);
    if (cpuendian_flag != fendian_flag)
        *i = SDL_Swap16(*i);
    if (secure)
        checksum += *i;
}

void saten_data_load_uint16(uint16_t *i)
{
    SDL_RWread(data, i, sizeof(uint16_t), 1);
    if (cpuendian_flag != fendian_flag)
        *i = SDL_Swap16(*i);
    if (secure)
        checksum += *i;
}

void saten_data_load_int32(int32_t *i)
{
    SDL_RWread(data, i, sizeof(int32_t), 1);
    if (cpuendian_flag != fendian_flag)
        *i = SDL_Swap32(*i);
    if (secure)
        checksum += *i;
}

void saten_data_load_uint32(uint32_t *i)
{
    SDL_RWread(data, i, sizeof(uint32_t), 1);
    if (cpuendian_flag != fendian_flag)
        *i = SDL_Swap32(*i);
    if (secure)
        checksum += *i;
}

void saten_data_load_int64(int64_t *i)
{
    SDL_RWread(data, i, sizeof(int64_t), 1);
    if (cpuendian_flag != fendian_flag)
        *i = SDL_Swap64(*i);
    if (secure)
        checksum += *i;
}

void saten_data_load_uint64(uint64_t *i)
{
    SDL_RWread(data, i, sizeof(uint64_t), 1);
    if (cpuendian_flag != fendian_flag)
        *i = SDL_Swap64(*i);
    if (secure)
        checksum += *i;
}

void saten_data_save_bool(bool b)
{
    SDL_RWwrite(data, &b, sizeof(bool), 1);
    if (secure)
        checksum += b;
}

void saten_data_load_bool(bool *b)
{
    SDL_RWread(data, b, sizeof(bool), 1);
    if (secure)
        checksum += *b;
}

void saten_data_save_string(char *str)
{
    int l = strlen(str) + 1;
    SDL_RWwrite(data, &l, sizeof(int), 1);
    SDL_RWwrite(data, str, sizeof(char), l);
    if (secure)
        checksum += l;
} 

void saten_data_load_string(char **str)
{
    int l;
    SDL_RWread(data, &l, sizeof(int), 1);
    *str = saten_malloc(sizeof(char) * l);
    SDL_RWread(data, *str, sizeof(char), l);
    if (secure)
        checksum += l;
} 

// private
void saten_data_hash_checksum(void)
{
    // TODO use a secure algorithm
    checksum = checksum % 79;
}
