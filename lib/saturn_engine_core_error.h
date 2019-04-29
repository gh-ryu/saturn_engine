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
