#include <stdio.h>
#include <stdint.h>

int main(void) {

    // Simulating a machine with 16 bit ints by default
    uint16_t a = 30000;
    uint16_t b = 30000;

    uint16_t c = a + b;

    printf("a + b = c = %d", c);
}