#include<stdio.h>

int main() {
    int num, num1,num2,num3,num4;

    printf("Enter a 4 digit num:");
    scanf("%d", &num);

    num1=(num/1000)%10;
    num2=(num/100)%10;
    num3=(num/10)%10;
    num4=num%10;

    int addition= num1+num4;
    printf("The result is:%d\n",addition);
    return 0;
}