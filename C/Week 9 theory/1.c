#include<stdio.h>
int main() {
    int n[5]; // n[5] indicates size of an array
    int temp =5;

    for( int i=0; i<5; i++){  // in array we dont put i<=
        n[i]= temp; //n[i] = the value stored at that index position
        temp++;    
    }
    printf("%s%8s\n", "Element", "Value");

    for(int i=0; i<5; i++){     // this loop is to actually print the values
        printf("%d\t%d\n", i, n[i]);
    }
}