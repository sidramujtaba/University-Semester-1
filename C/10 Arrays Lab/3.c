// Create a program that inserts an element at a specified position in an array.

/*#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size + 1]; // +1 because we will insert one new element

    // Input array elements
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int element, position;
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position (0 to %d): ", size);
    scanf("%d", &position);

    // Validate position
    if (position < 0 || position > size) {
        printf("Invalid position!\n");
        return 0;
    }

    // Shift elements to the right
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[position] = element;
    size++;

    // Display updated array
    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}*/

#include<stdio.h>
int main() {
    int sizearray;

    printf("Enter the size of the array:");
    scanf("%d", &sizearray);

    int Array[sizearray+1];

    for( int i=0; i<sizearray; i++){
        printf("Enter the numbers stored in array:");
        scanf("%d", &Array[i]);
    }
    int newvalue;
    printf("Enter the new value:");
    scanf("%d", &newvalue);

    Array[sizearray] = newvalue;
    sizearray++;

    printf("The contents of array after adding the new value:\n");
    for(int i =0; i<sizearray; i++){
        printf("%d ", Array[i]);
    }
    puts("");
}






