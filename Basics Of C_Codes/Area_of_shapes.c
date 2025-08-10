//This includes Area of Circle, Rectangle, and Triangle
#include <stdio.h>
#define PI 3.14

int main() {
    //float used for decimal values while int is used for whole numbers
    float radius, length, width, base, height;
    float area_circle, area_rectangle, area_triangle;

    // Area of Circle
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    area_circle = PI * radius * radius;
    printf("Area of Circle: %.2f\n", area_circle);
    //%.2f is used to format the output to 2 decimal places
    // Area of Rectangle
    printf("Enter length and width of rectangle: ");
    scanf("%f %f", &length, &width);
    area_rectangle = length * width;
    printf("Area of Rectangle: %.2f\n", area_rectangle);

    // Area of Triangle
    printf("Enter base and height of triangle: ");
    scanf("%f %f", &base, &height);
    area_triangle = 0.5 * base * height;
    printf("Area of Triangle: %.2f\n", area_triangle);

    return 0;
}