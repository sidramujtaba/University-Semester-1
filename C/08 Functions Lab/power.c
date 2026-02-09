#include<stdio.h>
int main() {
    int base, exponent, result=1, i;

    printf("Enter the base:");
    scanf("%d", &base);


    printf("Enter the exponent:");
    scanf("%d", &exponent);

    for( i=1; i<=exponent; i++){
        result= result* base;
    }

    printf("%d is the result when %d is raised to power %d", result, base, exponent);


}
/*#include <stdio.h>
#include <math.h>

int main() {
    double base, exponent, result;

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%lf", &exponent);

    result = pow(base, exponent);  // using math library function

    printf("%.2lf raised to %.2lf is %.2lf\n", base, exponent, result);

    return 0;
}*/
