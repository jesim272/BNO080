/* mbed Microcontroller Library
 * Copyright (c) 2018 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */
<<<<<<< HEAD
//fjamdkfjadklfjas;ldkfjadf
//flakdja;dkjfa;kdfjsldfjkalkdfjlsdfkjskdjf
=======
#define another_mergge_conflict_for_johnny
>>>>>>> ae028f48479cacdaf5429bd82e3c9ef3232a6b3b
#define merge_error_for_johnny
#include "mbed.h"
#include "BNO080.h"
DigitalOut led1(LED1);

#define SLEEP_TIME                  500 // (msec)


BNO080::BNO080(Serial *debugPort, PinName user_SDApin, PinName user_SCLpin, PinName user_INTPin, PinName user_RSTPin,
			   uint8_t i2cAddress, int i2cPortSpeed) :
// main() runs in its own thread in the OS
int main()
{
    int count = 0;
    while (true) {
        // Blink LED and wait 0.5 seconds
        led1 = !led1;
        wait_ms(SLEEP_TIME);
        ++count;
    }
}

