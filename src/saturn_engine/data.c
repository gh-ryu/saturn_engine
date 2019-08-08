#include "saturn_engine/core/_lib.h"

FILE *f;

bool encrypt;
char *dfilepath;
SDL_RWops *data;

void saten_data_save_init(char *fp, char *symkey)
{
    if (symkey) {
        saten_crypt_set_symkey(symkey);
        encrypt = true;
    }
    dfilepath = saten_strclone(fp);
    data = SDL_RWFromFile("tmp.txt", "w");
}

void saten_data_load_init(char *fp, char *symkey)
{
    if (symkey) {
        saten_crypt_set_symkey(symkey);
        encrypt = true;
    }
    dfilepath = saten_strclone(fp);
    data = SDL_RWFromFile(dfilepath, "r");
}

void saten_data_quit(void)
{
    free(dfilepath);
    SDL_RWclose(data);
    data = NULL;
    dfilepath = NULL;
    encrypt = false;
}

void saten_data_save_float(float f)
{
    SDL_RWwrite(data, &f, sizeof(float), 1);
    //SDL_RWwrite(data, "\n", sizeof(char), 1);
}

void saten_data_load_float(float *f)
{
    SDL_RWread(data, f, sizeof(float), 1);
}

void saten_data_save_int(int i)
{
    SDL_RWwrite(data, &i, sizeof(int), 1);
    //SDL_RWwrite(data, "\n", sizeof(char), 1);
}

void saten_data_load_int(int *i)
{
    SDL_RWread(data, i, sizeof(int), 1);
}

void saten_data_save_bool(bool b)
{
    SDL_RWwrite(data, &b, sizeof(bool), 1);
    //SDL_RWwrite(data, "\n", sizeof(char), 1);
}

void saten_data_load_bool(bool *b)
{
    SDL_RWread(data, b, sizeof(bool), 1);
    //SDL_RWwrite(data, "\n", sizeof(char), 1);
}

void saten_data_save_string(char *str)
{
    int l = strlen(str) + 1;
    SDL_RWwrite(data, &l, sizeof(int), 1);
    SDL_RWwrite(data, str, sizeof(char), strlen(str));
    //SDL_RWwrite(data, "\n", sizeof(char), 1);
} 

void saten_data_load_string(char **str)
{
    int l;
    SDL_RWread(data, &l, sizeof(int), 1);
    printf("l: %d\n", l);
    *str = saten_malloc(sizeof(char) * l);
    printf("ok...\n");
    SDL_RWread(data, *str, sizeof(char), l-1);
    str[l-1] = '\0';
    //SDL_RWwrite(data, "\n", sizeof(char), 1);
} 
