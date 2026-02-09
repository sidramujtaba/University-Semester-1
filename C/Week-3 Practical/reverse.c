#include<stdio.h>
int main() {
    int num, dig1, dig2, dig3, dig4;
    printf("Enter a 4 digit number:");
    scanf("%d",&num);

    dig1=(num/1000)%10;
    dig2=(num/100)%10;
    dig3=(num/10)%10;
    dig4=num%10;

    int reversed = (dig4*1000)+(dig3*100)+(dig2*10)+dig1;
    printf("The reversed number: %d\n", reversed);
    return 0;
}