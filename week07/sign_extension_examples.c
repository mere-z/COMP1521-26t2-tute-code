#include <stdio.h>
#include <stdint.h>


// Show students how the computer sign extends different types of integers
// 1. Extend a 16 bit unsigned integer into an unsigned 32 bit integer
// 2. Extend a 16 bit signed integer into an unsigned 32 bit integer
// 3. Extend a 16 bit unsigned integer into an signed 32 bit integer
// 4. Make the printf a %u on our signed integer

// Show arithmetic/logical shift difference
int main() {
    
    // // *1* 111111111111111 
    // // ^ special signed bit !! arithmetic shifts will preserve bit 
    // // rather than filling in with 0s 
    // int16_t x = 0xFFFF;

    int16_t x = 0xFFFF;

    // what does this become? 
    // 
    uint32_t y = x;

    printf("%d", y); 

}