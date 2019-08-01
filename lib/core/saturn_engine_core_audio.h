// private
int saten_audio_init(void)
{
    // MIX_DEFAULT_FREQUENCY = 22050Hz
    // for 44100Hz for CD quality
    if (Mix_OpenAudio(MIX_DEFAULT_FREQUENCY, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
        saten_errhandler(1);
        return -1;
    }
    saten_sfx_flag = NULL;
    return 0;
}
