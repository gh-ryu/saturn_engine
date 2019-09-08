#include "saturn_engine/core/_lib.h"

void saten_errhandler(int i)
{
    if (!SATEN_PRINTERR)
        return;

    switch (i) {
    case 0:
        saten_printerr(i, "Failed to initialize SDL");
        break;
    case 1:
        saten_printerr(i, "Failed to initialize audio module");
        break;
    case 2:
        saten_printerr(i, "Failed to initialize font module");
        break;
    case 3:
        saten_printerr(i, "Failed to initialize window");
        break;
    case 4:
        saten_printerr(i, "Failed to initialize renderer");
        break;
    case 5:
        saten_printerr(i, "Failed to open controller");
        break;
    case 6:
        saten_printerr(i, "Failed to clear renderer");
        break;
    case 7:
        saten_printerr(i, "Failed to allocate memory");
        break;
    case 8:
        saten_printerr(i, "Failed to open haptic device");
        break;
    case 9:
        saten_printerr(i, "Failed to check for rumble support");
        break;
    case 10:
        saten_printerr(i, "Failed to start rumble");
        break;
    case 11:
        saten_printerr(i, "Failed to stop rumble");
        break;
    case 12:
        saten_printerr(i, "Failed reading controller db file");
        break;
    case 13:
        saten_printerr(i, "Pointer to initialize is not null");
        break;
    case 14:
        saten_printerr(i, "Failed creating texture from surface");
        break;
    case 15:
        saten_printerr(i, "Failed to copy sprite surface");
        break;
    case 16:
        saten_printerr(i, "Failed copying texture to renderer");
        break;
    case 17:
        saten_printerr(i, "Failed creating new surface for layer");
        break;
    case 18:
        saten_printerr(i, "Failed creating texture from zero layer");
        break;
    case 19:
        saten_printerr(i, "Failed copying zero layer texture to renderer");
        break;
    case 20:
        saten_printerr(i, "Failed setting surface alpha mod");
        break;
    case 21:
        saten_printerr(i, "Failed setting texture alpha mod");
        break;
    case 22:
        saten_printerr(i, "Failed setting surface color mod");
        break;
    case 23:
        saten_printerr(i, "Failed setting texture color mod");
        break;
    case 24:
        saten_printerr(i, "Failed setting surface blend mode");
        break;
    case 25:
        saten_printerr(i, "Failed setting texture blend mode");
        break;
    case 26:
        saten_printerr(i, "Failed setting render draw color");
        break;
    case 27:
        saten_printerr(i, "Failed setting render draw blend mode");
        break;
    case 28:
        saten_printerr(i, "Failed to draw line to renderer");
        break;
    case 29:
        saten_printerr(i, "Failed to draw rect to renderer");
        break;
    case 30:
        saten_printerr(i, "Failed to draw point to renderer");
        break;
    case 31:
        saten_printerr(i, "Failed to blit surface");
        break;
    case 32:
        saten_printerr(i, "Can't get texture of sprite w/o surface");
        break;
    case 33:
        saten_printerr(i, "Failed to load image via IMG_load");
        break;
    case 34:
        saten_printerr(i, "Failed to setup mrb state");
        break;
    case 35:
        saten_printerr(i, "ID out of range");
        break;
    case 36:
        saten_printerr(i, "Glyph set already defined");
        break;
    case 37:
        saten_printerr(i, "Colors must not be larger than number of h items");
        break;
    case 38:
        saten_printerr(i, "A scene needs to be created before calling saten_run()");
        break;
    case 39:
        saten_printerr(i, "Failed to open file");
        break;
    case 40:
        saten_printerr(i, "Cannot access resources from scene that does not exist");
        break;
    case 41:
        saten_printerr(i, "Invalid sprite ID");
        break;
    case 42:
        saten_printerr(i, "Invalid sfx ID");
        break;
    case 43:
        saten_printerr(i, "Invalid bgm ID");
        break;
    case 44:
        saten_printerr(i, "Invalid text ID");
        break;
    case 45:
        saten_printerr(i, "Can only destroy scenes at the top of the stack");
        break;
    case 46:
        saten_printerr(i, "Failed to create load mutex");
        break;
    case 47:
        saten_printerr(i, "Failed to lock load mutex");
        break;
    case 48:
        saten_printerr(i, "Failed to unlock load mutex");
        break;
    case 49:
        saten_printerr(i, "Failed to replace save file");
        break;
    case 50:
        saten_printerr(i, "Error in data module: incompatible INT sizes");
        break;
    case 51:
        saten_printerr(i, "Error in data module: incompatible file");
        break;
    case 52:
        saten_printerr(i, "Error in data module: failed to open tmp file for writing");
        break;
    case 53:
        saten_printerr(i, "Unable to fetch display mode");
        break;
    case 54:
        saten_printerr(i, "Failed to restore window");
        break;
    case 55:
        saten_printerr(i, "Failed setting fullscreen-desktop");
        break;
    case 56:
        saten_printerr(i, "Failed setting fullscreen");
        break;
    case 57:
        saten_printerr(i, "Player ID is invalid");
        break;
    case 58:
        saten_printerr(i, "Unable to fetch window pixel format");
        break;
    case 59:
        saten_printerr(i, "Unable to create texture");
        break;
    case 60:
        saten_printerr(i, "Tilemap dimensions need to be multiples of 8");
        break;
    case 61:
        saten_printerr(i, "Failed to convert surface");
        break;
    case 62:
        saten_printerr(i, "Failed to receive renderer info");
        break;
    case 63:
        saten_printerr(i, "No sprite to blit for plane");
        break;
    case 64:
        saten_printerr(i, "Map needs to be at least the size of game screen");
        break;
    case 65:
        saten_printerr(i, "Plane already opened!");
        break;
    case 66:
        saten_printerr(i, "Plane already closed!");
        break;
    }
}

void saten_printerr(int i, char *str)
{
#ifdef _DEBUG
    fprintf(stderr, "ERROR(%d) : %s. (%s)\n", i, str, SDL_GetError());
#endif
    time_t t = time(NULL);
    struct tm *tm;
    tm = saten_localtime(&t);
    //FILE *errlog = saten_fopen(saten_errpath, "a");
    SDL_RWops *errlog = SDL_RWFromFile(saten_errpath, "a");
    char buffer[1024] = { 0 };
    //fprintf(errlog, "ERROR(%d) | %d-%d-%d %d:%d:%d | ", i, tm->tm_year + 1900,
    //        tm->tm_mon + 1, tm->tm_mday, tm->tm_hour, tm->tm_min, tm->tm_sec);
    //fprintf(errlog, "%s. (%s)\n", str, SDL_GetError());
    snprintf(buffer, 1024, "ERROR(%d) | %d-%d-%d %d:%d:%d | %s. (%s)\n", i,
            tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday, tm->tm_hour,
            tm->tm_min, tm->tm_sec, str, SDL_GetError());
    //printf("length of buffer: %ld\n", strlen(buffer));
    SDL_RWwrite(errlog, buffer, sizeof(char), strlen(buffer));

    //fclose(errlog);
    SDL_RWclose(errlog);
#ifdef _WIN32
    free(tm);
#endif
}
