// Create a program to find the largest element in an array of numbers

#include<stdio.h>
int main() {
    int size1;
    printf("Enter the size of the array:");
    scanf("%d", &size1);
    int Array[size1];
    int num; // Array[i] jo value store kare ga usko chlane ke liye num declare kar rahe
    int max=0;

    for(int i=0; i<size1; i++){ // no equals to in loop for array

        printf("Enter the numbers to store  in array:");
        scanf("%d", &num);
        Array[i] = num; 

        
        if(Array[i] > max){
            max= Array[i];
        }
        
    }
    printf("The largest of the numbers is %d", max);
    return 0;
}