#include<stdio.h>
int main() {
    int num, count;
    int factorial =1;

    printf("Enter the number:");
    scanf("%d", &num);

    for(count=5; count>=1; count--){
        factorial=factorial*count;
    }
    printf("The factorial of %d is %d\n", num, factorial);

}