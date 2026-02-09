//Write a program in C to add two numbers using pointers

#include<stdio.h>
int main() {
    int num1=90, num2=45;
    int *p, *q;

    p= &num1;
    q= &num2;

    printf("The sum of two numbers is %d\n", *p + *q);
    return 0;


}