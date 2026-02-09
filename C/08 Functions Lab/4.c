// Write a C program with a function findMax that finds and returns the maximum value in an array
// of integers. In the main function, take an array of integers as input, call the findMax function, and
// print the maximum value.

#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];   // Assume first element is maximum

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int size1;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size1);

    int array[size1];

    //printf("Enter %d integers:\n", size1);
    for (int i = 0; i < size1; i++) {
        printf("Enter the integer:");
        scanf("%d", &array[i]);
    }

    int maximum = findMax(array, size1);

    printf("The maximum value in the array is: %d\n", maximum);

    return 0;
}
