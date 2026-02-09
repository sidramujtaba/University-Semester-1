// Create a program to print a square pattern using an array.

#include <stdio.h>

int main(void) {

    int ArraySize = 5; 
    char Array[5]; // or char Array[arraysize]

   
    for (int i = 0; i < ArraySize; i++) {
        Array[i] = '*';
    }

    
    for (int i = 0; i < ArraySize; i++) {    // 0 - 5  
        for (int j = 0; j < ArraySize; j++) {    // 0 - 5      
            printf("%c ", Array[j]);  // same logic as non-array diamond questions // " %c" only in scanf
        }
        printf("\n");
    }

    return 0;
}
