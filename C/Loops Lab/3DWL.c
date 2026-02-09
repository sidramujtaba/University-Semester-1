#include<stdio.h>
int main() {
    int num, dig1, dig2, dig3, dig4, dig5, reverse;
    printf("Enter a five digit number:");
    scanf("%d", &num);

    do{
        dig1= (num/10000)%10;
        dig2= (num/1000)%10;
        dig3= (num/100)%10;
        dig4= (num/10)%10;
        dig5= num%10;

        reverse= ((dig5*10000) + (dig4*1000) + (dig3*100) + (dig2*10) + dig1);
        printf("%d", reverse);
    }
    while( num<1); // loop breaks when condition is false, now 12345 is > than 1, so when num is less than 1, condiotion true and loop continues
    return 0;



}