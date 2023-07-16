#include "mbed.h"

DigitalOut led1(LED1);
DigitalOut led2(LED2);

int main() {
    while (1) {
        led1 = !led1;  // LED1
        ThisThread::sleep_for(2000);  // Wait 2 seconds

        led2 = !led2;  //  LED2
        ThisThread::sleep_for(5000);  // Wait 5 seconds
    }
}


