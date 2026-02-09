//Write a program to find the smallest number in an array using pointers

#include<stdio.h>
int main() {
    int arr[10] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;

    int min = *ptr;
    for(int i=0; i<10; i++){
        if(*ptr < min){
            min= *ptr;
        }
        ptr++;
    }
    printf("The smallest number is %d",min);
}