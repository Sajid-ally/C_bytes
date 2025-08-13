/**
 * This C program counts the number of digits in a given integer.
 * It prompts the user to enter an integer and then calculates how many digits are in that integer.
 */

#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Count the number of digits
    while (num != 0) {
        num /= 10;
        count++;
    }

    printf("Number of digits: %d\n", count);

    return 0;
}