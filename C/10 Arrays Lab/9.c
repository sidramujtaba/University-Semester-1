// Write a program that generates a right-angled triangle pattern using an array.

#include <stdio.h>

int main(void) {

    int ArraySize = 10; 
    char Array[ArraySize];

   
    for (int i = 0; i < ArraySize; i++) {
        Array[i] = '*';
    }

    
    for (int i = 0; i < ArraySize; i++) {        
        for (int j = 0; j < i; j++) {    // inter-dependency logic.
            printf("%c", Array[j]);    
        }
        printf("\n");
    }

    return 0;
}