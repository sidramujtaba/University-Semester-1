#include<stdio.h>

int main() {
    int value;

    printf("Enter the value:");
    scanf("%d", &value);

    if( value %5==0)
    {
        printf("The value is divisible by 5");
    }
    else{
        printf("The value is not divisible by 5");
    }
    return 0;
}