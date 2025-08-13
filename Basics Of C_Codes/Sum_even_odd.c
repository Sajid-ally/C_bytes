/**
 * The program calculates the sum of even and odd numbers entered by the user up to a specified limit
 * using a while loop.
 * 
 * @return The program returns 0, which indicates successful execution and termination of the program.
 */
#include <stdio.h>

int main() {
    int num, even_sum = 0, odd_sum = 0;
    int count = 0, limit;

    printf("Enter a limit: ");
    scanf("%d", &limit);

    printf("Enter any number up to %d limit: ", limit);

    while (count < limit) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            even_sum += num;
        } else {
            odd_sum += num;
        }
        count++;
    }

    printf("Sum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);

    return 0;
}