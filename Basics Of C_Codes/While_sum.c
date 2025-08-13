// This program calculates the sum of the first 10 natural numbers using a while loop
#include <stdio.h>

int main() {
    int i = 1, sum = 0;
    while (i <= 10) {
        sum += i;
        i++;
    }
    printf("The sum of the first 10 natural numbers is: %d\n", sum);

printf("-----------------------------------------------------------------------\n");
//This program calculates any natural number's sum up to a given limit  and input any number using a while loop


   int num,count=0,total=0 ,limit;
   printf("Enter a limit ");
   scanf("%d",&limit);
  
   printf("Enter any  number upto %d limit: ", limit);

   while (count < limit) {
        scanf("%d", &num); // read one number
        total += num;      // add it to sum
        count++;           // keep track of how many entered
    }
   printf("Sum of digits (up to limit): %d\n", total);
   return 0;
}
 /* The line `printf("Enter any number up to %d limit: ", limit);` is displaying a message to the
   user prompting them to enter any number up to the specified limit. The `%d` in the format string
   is a placeholder for the integer value of `limit`, which will be replaced by the actual value of
   `limit` when the message is printed. This helps the user understand the range within which they
   can input numbers. */