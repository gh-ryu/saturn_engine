#ifndef SATURN_ENGINE_CORE_FLAG
#define SATURN_ENGINE_CORE_FLAG

bool saten_flag_check(uint8_t mask, uint8_t flag)
{
    return ((flag & mask) != 0);
}

void saten_flag_set(uint8_t mask, uint8_t *flag)
{
    *flag |= mask;
}

void saten_flag_unset(uint8_t mask, uint8_t *flag)
{
    *flag &= ~mask;
}

#endif /* SATURN_ENGINE_CORE_FLAG */
