#include <Arduino.h>
#include "crypto.h"
#include <printhex.h>

void setup()
{
    Serial.begin(115200);
    //delay(1000);

    const char *text = "fuckkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk";
    const char *key = "1234567890";

    size_t encryptedLen;
    size_t decryptedLen;

    unsigned char *encrypted =
        encryptText(text, key, &encryptedLen);

    Serial.print("Encrypted: ");
    printHex(encrypted, encryptedLen);

    char *decrypted =
        decryptText(
            encrypted,
            encryptedLen,
            key,
            &decryptedLen
        );

    Serial.print("Decrypted: ");
    Serial.println(decrypted);

    free(encrypted);
    free(decrypted);
}

void loop()
{
}