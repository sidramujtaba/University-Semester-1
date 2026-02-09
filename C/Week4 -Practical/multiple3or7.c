#include<stdio.h>
int main() {
    int num;
    printf("Enter the num:");
    scanf("%d", &num);
    if (num%3==0 && num%7==0)
    {
        printf("The num is multiple of both");
    }
    else if(num%3==0) 
    {
        printf("The num is multiple of 3");
    }
    else if(num%7==0)
    {
        printf("The num is multiple of 7");
    }
    else{
        printf("The num is not a multiple of 3 or 7");
    }
    return 0;
    
}