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
    }
}

void saten_printerr(int i, char *str)
{
#ifdef DEV
    fprintf(stderr, "ERROR(%d) : %s. (%s)\n", i, str, SDL_GetError());
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    FILE *errlog = fopen(saten_errpath, "a");
    fprintf(errlog, "ERROR(%d) | %d-%d-%d %d:%d:%d | ", i, tm.tm_year + 1900,
            tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
    fprintf(errlog, "%s. (%s)\n", str, SDL_GetError());
    fclose(errlog);
#endif
}
