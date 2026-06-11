// Squares a number, unless its square is too big for a 32-bit integer.
// If it is too big, prints an error message instead.

#include <stdio.h>

#define SQUARE_MAX 46340

int main(void) {
    int x, y;

    printf("Enter a number: ");
    scanf("%d", &x);

    // Goto statements and reversing if statements

    if (x <= SQUARE_MAX) goto else_fine;
        printf("square too big for 32 bits\n");
        goto    end_if;
else_fine:
        y = x * x;
        printf("%d\n", y);
end_if:

    

    return 0;
}