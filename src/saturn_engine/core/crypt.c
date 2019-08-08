/* The C part of the  library used to encrypt and decrypt
 * save data. Do not use this on sensitive data.
 */

#include "saturn_engine/core/_lib.h"

saten_cryptomngr mrb_cryptobj;

void saten_mrb_crypt_init(void)
{
    FILE *f = NULL;
    saten_fopen(&f, "script/saten_script_class_crypt.rb", "r");
    mrb_load_file_cxt(saten_mrb, f, saten_mrbc);
    fclose(f);
}

void saten_mrb_crypt_set_symkey(char *str)
{
    int l = strlen(str) + 1;
    mrb_cryptobj.symkey = saten_malloc(l * sizeof(char));
    mrb_cryptobj.symkey = (char*) memcpy(mrb_cryptobj.symkey, str, l);
}

void saten_crypt_obj_free(void)
{
    if (mrb_cryptobj.flag)
        mrb_gc_unregister(saten_mrb, mrb_cryptobj.o);
}

void saten_crypt_obj_create()
{
    mrb_value arr[1];
    mrb_value mrb_str = mrb_str_new_cstr(saten_mrb, mrb_cryptobj.symkey);
    arr[1] = mrb_str;
    struct RClass *crypt = mrb_class_get(saten_mrb, "Crypt");
    mrb_cryptobj.o = mrb_obj_new(saten_mrb, crypt, 1, arr);
    mrb_gc_register(saten_mrb, mrb_cryptobj.o);
}

void saten_crypt_encrypt(char *string)
{
    mrb_funcall(saten_mrb, mrb_cryptobj.o, "encrypt", 0);
}

void saten_crypt_decrypt(char *string)
{
    mrb_funcall(saten_mrb, mrb_cryptobj.o, "decrypt", 0);
}

void saten_crypt_quit(void)
{
    free(mrb_cryptobj.symkey);
    mrb_cryptobj.symkey = NULL;
}
