#include<stdio.h>

int multiply( int a, int b);

int main(){
    int num1, num2, result;
    printf("Enter two integers:");
    scanf("%d", &num1);
    scanf("%d", &num2);

    result=multiply(num1, num2);
    printf("The product is \n%d", result);
}

int multiply( int a, int b){


    return a*b;
}

/*#include <stdio.h>
#include <math.h>

// Function Prototype
float findRoot(float x);

int main() {
    float a;

    printf("Enter a number to find its square root: ");
    scanf("%f", &a);

    float result = findRoot(a);

    printf("The square root of %.2f is %.2f\n", a, result);

    return 0;
}

// Function Definition
float findRoot(float x) {
    return sqrt(x);   // using math.h sqrt() function
}*/
