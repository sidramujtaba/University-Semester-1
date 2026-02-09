#include<stdio.h>

    int power( int a, int b);
     int main() {
        int base, exponent, result=1;


    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    
    result = power(base, exponent);
    printf("%d raised to %d is: %d\n", base, exponent, result); 


     }
    int power( int a, int b){
        int answer =1;

    

     for(int i = 1; i <=b; i++) {    // race-to-power logic.
     answer = answer * a;  
    }
    return answer;

      
}