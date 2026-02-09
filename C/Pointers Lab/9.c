//Write a program to find the sum of all elemnts of an array using pointers

#include<stdio.h>
int main() {
   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   
    int *ptr = arr;
    int sum=0;

    for(int i=0; i<10; i++){
        sum = sum + *ptr;
        ptr++;    //in every iteration we add the value of pointer not the address hence used p++
    }
    printf("The sum of all the elements in an array is : %d", sum);
    return 0;

}