#include <stdio.h>

int main() {
    int num, root;

    printf("Enter an integer: ");
    scanf("%d", &num);

    for (root = 1; root * root <= num; root++) {
        // loop continues until root*root exceeds num
    }

    root--;   // step back to the correct integer root

    printf("Integer square root of %d is %d\n", num, root);

    return 0;
}
/*#include <stdio.h>
#include <math.h>

int main() {
    double num, result;

    printf("Enter a number: ");
    scanf("%lf", &num);

    result = sqrt(num);  // using math library function

    printf("Square root of %.2lf is %.2lf\n", num, result);

    return 0;
}*/
