//This is the basic if-else program to check whether a number is positive or negative
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is negative.\n");
    }

    return 0;
}