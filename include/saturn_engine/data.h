#ifndef SATURN_ENGINE_DATA
#define SATURN_ENGINE_DATA

void saten_data_init(char *fp, bool is_secure);
void saten_data_save_init(char *fp, bool is_secure);
void saten_data_load_init(char *fp, bool is_secure);
void saten_data_quit(void);
int saten_data_save_quit(void);
int saten_data_load_quit(void);
void saten_data_hash_checksum(void); // mutes checksum
void saten_data_save_float(float f);
void saten_data_save_int(int i);
void saten_data_save_int8(int8_t i);
void saten_data_save_int16(int16_t i);
void saten_data_save_int32(int32_t i);
void saten_data_save_int64(int64_t i);
void saten_data_save_uint8(uint8_t i);
void saten_data_save_uint16(uint16_t i);
void saten_data_save_uint32(uint32_t i);
void saten_data_save_uint64(uint64_t i);
void saten_data_save_bool(bool b);
void saten_data_save_string(char *str);
void saten_data_load_float(float *f);
void saten_data_load_int(int *i);
void saten_data_load_int8(int8_t *i);
void saten_data_load_int16(int16_t *i);
void saten_data_load_int32(int32_t *i);
void saten_data_load_int64(int64_t *i);
void saten_data_load_uint8(uint8_t *i);
void saten_data_load_uint16(uint16_t *i);
void saten_data_load_uint32(uint32_t *i);
void saten_data_load_uint64(uint64_t *i);
void saten_data_load_bool(bool *b);
void saten_data_load_string(char **str);

#endif /* SATURN_ENGINE_DATA */
