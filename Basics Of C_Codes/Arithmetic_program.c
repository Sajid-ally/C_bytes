
//Square =number*number, Cube = number*number*number
#include <stdio.h>

int main() {
    int num, square, cube;
    //int num = <any number>;here you can input any number (// is a comment line where you can explain the code
    //compiler never execute this line)

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    cube = num * num * num;

    printf("Square of %d is %d\n", num, square);
    printf("Cube of %d is %d\n", num, cube);

    return 0;
}