#include<stdio.h>

int main() {
    int int1, int2, temp;
    printf("Enter the first integer");
    scanf("%d", &int1);

    printf("Enter the second integer");
    scanf("%d", &int2);

    temp=int1;
    int1=int2;
    int2=temp;
    printf("The value of a=%d and the value of b=%d", int1, int2);
    return 0;
    
}