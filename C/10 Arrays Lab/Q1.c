// Write a program that calculates the sum of elements in an array of integers.
// Q7 ALSO SAME AS THIS ONE

#include<stdio.h>
int main() {
    int size1;
    printf("Enter the size of the array:");
    scanf("%d", &size1);
    int Array[size1];
    int num; // Array[i] jo value store kare ga usko chlane ke liye num declare kar rahe
    int sum=0;

    for(int i=0; i<size1; i++){ // no equals to in loop for array

        printf("Enter the numbers to store  in array:");
        scanf("%d", &num);

        Array[i] = num;
        sum= sum+ Array[i];
        
    }
    printf("The sum of the numbers is %d", sum);
    return 0;
}

