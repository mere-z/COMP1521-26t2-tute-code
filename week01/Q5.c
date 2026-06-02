#include <stdio.h>

// Write a c program count_chars.c that uses getchar to 
// read in characters from stdin until the user enters Ctrl-D and 
// then prints the total number of characters entered.

// Use man 3 getchar to look at the manual entry.
int main(void) {
    int count = 0;
    int c;

    while ((c = getchar()) != EOF) {
        count++;
    }

    printf("%d\n", count);
   

}