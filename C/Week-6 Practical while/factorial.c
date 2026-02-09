
#include <stdio.h>

int main() {
    int num, i, factorial;

    printf("Enter a number: ");
    scanf("%d", &num);

    factorial = num;   // start with the entered number
    i = num - 1;       // initialize i one less than num

    while (i > 1) { // true>>>>>>>>>>loops continues, false condition>>>>>>>>>>loop breaks
        factorial = factorial * i;
        i--;
    }

    printf("The factorial of %d is %d", num, factorial);
    return 0;
}