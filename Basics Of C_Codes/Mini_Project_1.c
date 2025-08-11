//Creating one report card using nested if-else 
#include<stdio.h>
int main(){
    printf("Enter (out of 100) marks for 6 subjects:\n");
    float Marks1,Marks2,Marks3,Marks4,Marks5,Marks6,sum;
    printf("Enter English marks : ");
    scanf("%f",&Marks1);
    printf("Enter Maths marks : ");
    scanf("%f",&Marks2);
    printf("Enter Science marks : ");
    scanf("%f",&Marks3);
    printf("Enter Social Studies marks : ");
    scanf("%f",&Marks4);
    printf("Enter Computer marks : ");
    scanf("%f",&Marks5);
    printf("Enter Physical Education marks : ");
    scanf("%f",&Marks6);
    sum=Marks1+Marks2+Marks3+Marks4+Marks5+Marks6;
    int percentage=(sum/600)*100;
    printf("Total marks = %.2f\n",sum);
    printf("Percentage = %d%%\n",percentage);
    if(percentage>=60){
        printf("Division First \n");
    }
    else if(percentage>=50){
        printf("Division Second \n");
    }
    else if(percentage>=40){
        printf("Division Third \n");
    }
    else{
        printf("Fail try next time \n");
    }
    return 0;
}