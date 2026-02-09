#include<stdio.h>
int main() {
    int num = 12345, rev = 0, rem ;
    if(num >= 10000 && num <= 99999){    //This checks whether the number is a 5-digit number.
        while(num >0){

            rem = num % 10;
            rev = rev * 10 + rem;
            num /=10;
        }
        printf( "The reverse number: %d", rev);
    }

}