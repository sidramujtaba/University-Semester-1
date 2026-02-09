//Write a program to find the address of two integer variables
#include<stdio.h>
int main() {
    int num1 =56, num2= 90; // declaring variables
    int *ptr, *ptr1;        // declaring pointers

    ptr= &num1;  // Storing the adress of num1 in pointer ptr
    ptr1= &num2; // Storing the address of num2 in pointer ptr

    printf("The address of first number is %p", ptr);
    printf("\nThe address of second number  is %p", ptr1); // printing the memory address stored in pointer ptr1
    return 0;
}