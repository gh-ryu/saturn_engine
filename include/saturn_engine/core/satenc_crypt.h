#ifndef SATURN_ENGINE_CORE_CRYPT
#define SATURN_ENGINE_CORE_CRYPT

void saten_mrb_crypt_init(void);
void saten_crypt_obj_free(void);
void saten_crypt_quit(void);
void saten_crypt_obj_create();
void saten_crypt_encrypt(char *string);
void saten_crypt_decrypt(char *string);
void saten_mrb_crypt_set_symkey(char *str);

#endif /* SATURN_ENGINE_CORE_CRYPT */
