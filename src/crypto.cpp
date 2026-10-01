#include <Arduino.h>
#include <string.h>
#include <stdlib.h>
#include <xxtea.h>
#include "crypto.h"

unsigned char *encryptText(
    const char *text,
    const char *key,
    size_t *outLen
)
{
    return (unsigned char *)xxtea_encrypt(
        text,
        strlen(text),
        key,
        outLen
    );
}

char *decryptText(
    const unsigned char *data,
    size_t len,
    const char *key,
    size_t *outLen
)
{
    return (char *)xxtea_decrypt(
        data,
        len,
        key,
        outLen
    );
}