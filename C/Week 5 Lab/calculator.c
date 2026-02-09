// Write a C-Program to perform simple arithimetic operarions by using switch-case.

#include<stdio.h>
int main() {
    int  num1, num2, result;
    char operator;

    printf("Enter the first number:");
    scanf("%d", &num1);

    printf("Enter the second number:");
    scanf("%d", &num2);

    printf("Enter operator:");
    scanf(" %c", &operator); // whenever using %c in scanf, give SPACE before using it

    switch(operator){
        case'+':
        result = num1 + num2;
        printf("Sum is %d\n", result);
        break;

        case'/':
        if(num2 != 0){
        result= num1/num2;
        printf("division is %d\n", result);
        }
        else{
        printf("num2 is zero so the answer will be infinity");
        }
        break;

        case'%':
        result= num1 % num2;
        printf("Remainder is %d\n", result);
        break;

        case'-':
        result= num1-num2;
        printf("Subtart num is %d\n", result);
        break;

        case'*':
        result= num1 *num2;
        printf("Multiplication is  %d\n", result);
        break;

        default:
        printf("Invalid operator.\n");
    }
    return 0;

}
