//Write a program and show the memory address of 10 indexes, array data type was integer and
//shows the addresses of particular array on screen?

#include<stdio.h>

int main() {
    int arr[10];   // Declare an integer array of 10 elements
    int i;

    // Initialize the array with sample values
    for (i = 0; i < 10; i++) {
        arr[i] = i + 1;  // Storing values 1 to 10
    }

    // Print addresses of each array element
    //printf("Array element values and their memory addresses:\n\n");

    for (i = 0; i < 10; i++) {
        printf("arr[%d] = %d\t Address: %p\n", i, arr[i], &arr[i]);
    }

    return 0;
}
