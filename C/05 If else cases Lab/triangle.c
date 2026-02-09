#include <stdio.h>
int main() {
    float a,b,c, sum;
    printf("Enter the first angle:");
    scanf("%f", &a);

    printf("Enter the second angle:");
    scanf("%f", &b);

    printf("Enter the third angle:");
    scanf("%f", &c);

    sum = a+b+c;
    if (sum == 180.0){
        if ( a ==b && b==c){
            printf("Equilateral Triangle");
        }
        else if( a==b || b==c || a==c){
            printf("Isosceles triangle");
        }
        else if( a== 90 || b == 90 || c ==90){
            printf("Right angled triangle");
        }
        else {
            printf("scalene triangle");
        }
    }

    else{
        printf("The triangle is not valid");
    }
    return 0;
}