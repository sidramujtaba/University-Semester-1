// Write a program to perform division between two variables using pointer
#include<stdio.h>
int main() {
    int num1 =4, num2= 2;  // declaring variables
    int *p =&num1, *q =&num2; // storing the adresses of the numbers in their specific pointers

    int result=0;
    result = *p/ *q;

    printf("the result by diving the two numbers is %d", result);
    return 0;
}

