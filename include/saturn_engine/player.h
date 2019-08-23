#ifndef SATURN_ENGINE_PLAYER
#define SATURN_ENGINE_PLAYER

/* PUBLIC */
int saten_player_enable(int id);
int saten_player_disable(int id);
int saten_player_assign_keyboard(int id);
int saten_player_assign_pad(int id, int pad);
uint32_t saten_player_btnr(int id, uint8_t btn);
uint32_t saten_player_keyr(int id, uint8_t key);

/* PRIVATE */
int saten_player_check(int id);


#endif /* SATURN_ENGINE_PLAYER */
