#include <stdio.h>
#include <stdint.h>

int main(void) {
    int x = 0b10010101;
    // get the middle 3 bits of the number and print it out 
    // goal: get a mask of 0b111
    int mask = 1;
    // ooption 1: hardcode the mask;
    // mask = 0b111;

     mask = mask << 3; // 0b1000
     mask = mask - 1; // 0b0111
     printf("%d", x & mask );

}
// biggest digit in decimal = 9
// biggest digit in binary = 1