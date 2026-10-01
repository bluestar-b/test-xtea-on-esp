#include <Arduino.h>
#include "printhex.h"

void printHex(const unsigned char *data, size_t len)
{
    for (size_t i = 0; i < len; i++) {
        if (data[i] < 0x10)
            Serial.print("0");

        Serial.print(data[i], HEX);
    }

    Serial.println();
}