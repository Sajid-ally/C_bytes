//This is another nested if-else loop for finding leapyear
#include<stdio.h>
int main(){
    int year;
    printf("Enter a year : ");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0)
    //&& is a logical AND operator
    {
        printf("%d is a leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }
}
