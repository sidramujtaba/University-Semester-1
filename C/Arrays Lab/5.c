// Develop a program that reverses the elements of an array.

#include<stdio.h>
int main() {
    int sizearray;
    printf("Enter the size of array:");
    scanf("%d", &sizearray);

    int Array[sizearray];
    for(int i=0; i<sizearray; i++){
        printf("Enter the elements to be stored in an array:");
        scanf("%d", &Array[i]);
    }

    /*temp=int1;
    int1=int2;
    int2=temp;*/
    // using swapping technique

    for(int i =0; i<sizearray/2; i++){
        int temp= Array[i];
        Array[i] = Array[sizearray - 1 - i];  // store 9 - 1 - i in Array[i].

        Array[sizearray - 1 - i] = temp; // store the last index's value in the first index.
    }

    printf("Contents of the Reversed array: ");
    for (int i = 0; i < sizearray; i++){
        printf("%d ", Array[i]);
    }


}
