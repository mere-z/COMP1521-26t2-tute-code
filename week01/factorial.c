#include <stdio.h>

int factorial(int n);

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, factorial(n)); 
    return 0;
}


int factorial(int n) {
  	// base case
	if (n == 0) {
		return 1;
	}
	
	// error check 
	if (n < 0) {
		return -1;
	}
  	// recursive case
	return n * factorial(n - 1);


}
