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
    }
}

void saten_printerr(int i, char *str)
{
#ifdef DEV
    fprintf(stderr, "ERROR(%d) : %s. (%s)\n", i, str, SDL_GetError());
#endif
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    FILE *errlog = fopen(saten_errpath, "a");
    fprintf(errlog, "ERROR(%d) | %d-%d-%d %d:%d:%d | ", i, tm.tm_year + 1900,
            tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
    fprintf(errlog, "%s. (%s)\n", str, SDL_GetError());
    fclose(errlog);
}
