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

// public
int saten_audio_sfx_set_vol(int i, int vol)
{
    // returns previous volume
    return Mix_VolumeChunk(saten_asset.sfx[i], vol);
}

// public
void saten_audio_sfx_set(int i)
{
    if (i >= 0 && i < saten_asset.sfx_n)
        saten_sfx_flag[i] = true;
}

// public
void saten_audio_sfx_play(void)
{
    // plays all soundeffects that have been set
    for (int i = 0; i < saten_asset.sfx_n; i++)
        if (saten_sfx_flag[i])
            Mix_PlayChannel(-1, saten_asset.sfx[i], 0);
}

// public
void saten_audio_sfx_unset(int i)
{
    // unsets a soundeffect. unsets all if i == -1
    if (i == -1)
        memset(saten_sfx_flag, 0, sizeof(bool)*saten_asset.sfx_n);
    if (i >= 0 && i < saten_asset.sfx_n)
        saten_sfx_flag[i] = false;
}

// private use after loading/unloading soundeffects
void saten_audio_sfx_reset(void)
{
    saten_sfx_flag =
        saten_realloc(saten_sfx_flag, sizeof(bool) * saten_asset.sfx_n);
    memset(saten_sfx_flag, 0, sizeof(bool) * saten_asset.sfx_n);
}
