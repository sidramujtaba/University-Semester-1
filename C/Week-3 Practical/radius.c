// The radius of a circle is input through the keyboard. Write a program to calculate
// the area and the circumference of the circle
#include<stdio.h>
int main() {
    float radius, circumference, area;

    printf("Enter the radius of circle:");
    scanf("%f",&radius);

    area= 3.14159*radius*radius;
    printf("The area of the circle is: %f\n", area);

    circumference=2*3.14159*radius;
    printf("The circumference of the circle is :%f\n", circumference);

    return 0;
}
