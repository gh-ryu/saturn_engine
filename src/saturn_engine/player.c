#include "saturn_engine/_lib.h"

saten_player player[SATEN_PLAYER_NUM]; // 4 players max

int saten_player_enable(int id) /* PUBLIC */
{
    int i;
    if ((i = saten_player_check(id)) == -1)
        return -1;

    player[i].flag = true;
    return 0;
}

int saten_player_disable(int id) /* PUBLIC */
{
    int i;
    if ((i = saten_player_check(id)) == -1)
        return -1;

    memset(&player[i], 0, sizeof(saten_player));
    return 0;
}

int saten_player_check(int id) /* PRIVATE */
{
    if (id < 1 || id > SATEN_PLAYER_NUM) {
        saten_errhandler(57);
        return -1; // player id invalid
    } else {
        return id-1; // return array index
    }

}

int saten_player_assignkeyboard(int id) /* PUBLIC */
{
    int i;
    if ((i = saten_player_check(id)) == -1)
        return -1;

    player[i].keyboardf = true;
    return 0;
}

int saten_player_assignpad(int id, int pad) /* PUBLIC */
{
    int i;
    if ((i = saten_player_check(id)) == -1)
        return -1;
    if (pad > SATEN_PAD_NUM)
        return -1;

    if (saten_pads[pad].flag) {
        player[i].controllerf = true;
        player[i].padid = pad;
    }
    return 0;
}
