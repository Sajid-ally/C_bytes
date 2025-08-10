// This code demonstrates the use of the conditional (ternary) operator(?)
#include <stdio.h>

int main() {
    int a = 5, b = 10;
    int max = (a > b) ? a : b;  // if condition is true, a is assigned; otherwise, b is assigned
    printf("The maximum value is: %d\n", max);
    return 0;
}
