//This code Help you understand AND (&&) ,OR (||) and Not (!)
#include <stdio.h>

int main() {
    //int a = 5, b = 10;
    int a,b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    // AND (&&) operator .This check if both conditions are true
    if (a < b && b > 5) {
        printf("Both conditions are true (AND)\n");
    }

    // OR (||) operator .This check if at least one condition is true
    if (a > b || b > 5) {
        printf("At least one condition is true (OR)\n");
    }

    // NOT (!) operator .This check if condition true evaluates to false or vice versa
    if (!(a > b)) {
        printf("Condition is false (NOT)\n");
    }

    return 0;
}