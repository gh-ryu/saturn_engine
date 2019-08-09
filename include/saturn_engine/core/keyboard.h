#ifndef SATURN_ENGINE_CORE_KEYBOARD
#define SATURN_ENGINE_CORE_KEYBOARD

void saten_keyb_input_refresh(void);
void saten_keyb_input_update(bool b, uint8_t i);
uint32_t saten_key(uint8_t i);
void saten_key_lock(int i);
void saten_key_unlock(int i);

#endif /* SATURN_ENGINE_CORE_KEYBOARD */
