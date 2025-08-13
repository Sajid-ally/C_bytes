
/**
 * This program checks if a number is divisible by another number.
 * It prompts the user to enter two integers and then checks if the first number is divisible by the second.
 */
#include<stdio.h>
int main() {
    int num1, num2;

    // Prompt user for input
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Check divisibility
    if (num2 != 0) { // Avoid division by zero
        if (num1 % num2 == 0) {
            printf("%d is divisible by %d\n", num1, num2);
        } 
      
         else
        {
            printf("%d is not divisible by %d\n", num1, num2);
        }
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}