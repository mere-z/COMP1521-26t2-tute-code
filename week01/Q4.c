#include <stdio.h>

int main(void) {
    char str[10];
    str[0] = 'S';
    str[1] = 'a';
    str[2] = 'm';
    str[3] = '\0';
    str[4] = 'y';
    str[5] = '\0';
    printf("%s", str);
    return 0;
}