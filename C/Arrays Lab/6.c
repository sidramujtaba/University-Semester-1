// Write a program to search for a specific element in an array and determine its index.
#include<stdio.h>
int main() {
    int sizearray;

    printf("Enter the size of arrray:");
    scanf("%d", &sizearray);

    int Array[sizearray];
    for(int i=0; i<sizearray; i++){
        printf("Enter the numbers to store in an array:");
        scanf("%d", &Array[i]);
    }

    int userinput;
    printf("Enter any recent input to check its index:");
    scanf("%d", &userinput);
    for( int i=0; i<sizearray; i++){
        if(Array[i] == userinput){
            printf("The index of the specific element is %d\n", i);

        }
    }
    return 0;
}