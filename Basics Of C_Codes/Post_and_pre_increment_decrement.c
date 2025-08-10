//This program demonstrates the use of post-increment and pre-increment operators
#include <stdio.h>

int main() {
    int i = 5;
   ++i;  // Pre-increment: i is incremented, then +1 get add first then print
   printf("Pre-increment: i = %d\n", i);//output: 6

    i++;  // Post-increment: i gets the value of i, then i is incremented
    printf("Post-increment: i = %d\n", i);//output: 7
    printf("Post-increment: i = %d\n", i++); //output: 7, but i is now 8 In this code first I print then add +1
    printf("Post-increment: i = %d\n", i);//output: 8

    return 0;
}
