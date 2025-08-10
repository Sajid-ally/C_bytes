//This codes helps to convert any currency into rupees
#include <stdio.h>

int main() {
    float amount;
    float conversion_rate = 87.58; // Dollar to Rupee conversion rate
    printf("Enter the amount in dollar currency: ");
    scanf("%f", &amount);
    float converted_amount = amount * conversion_rate;
    printf("Equivalent amount in rupees: %.2f\n", converted_amount);
    //%.2f is used to format the output to 2 decimal places
    return 0;
}