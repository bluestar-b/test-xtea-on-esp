#ifndef CRYPTO_H
#define CRYPTO_H

#include <Arduino.h>

unsigned char *encryptText(
    const char *text,
    const char *key,
    size_t *outLen
);

char *decryptText(
    const unsigned char *data,
    size_t len,
    const char *key,
    size_t *outLen
);

#endif