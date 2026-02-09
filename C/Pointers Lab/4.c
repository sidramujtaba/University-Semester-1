//Write a program to swap value of two variables using pointer

#include<stdio.h>
int main() {
    int num1=23, num2=45; // declaring variables

    int *p =&num1, *q= &num2; // storing the adresses of the numbers to specific pointers
    printf("The original values are %d, %d", num1, num2);

    *p = *p + *q;
    *q =  *p - *q;
    *p = *p - *q;
    

    printf("\nThe swapped values are %d", *p); // printing the swapped values
    printf(" %d", *q);

    return 0;
}