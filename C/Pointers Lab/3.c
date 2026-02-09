//Write a program to find biggest among three numbers using pointer.

#include<stdio.h>
int main() {
    int num1, num2, num3;                     // declaring variables
    int *p = &num1, *q= &num2, *r =&num3;     // Storing the address of the user-input numbers in the respective pointers

    printf("Enter the first integer:");      // taking the numbers as input from the user
    scanf("%d", p);                          // havent use & as it would indicate the address of the value stored
                                            // instead of the value of pointer itself also
    printf("Enter the first integer:");     // *p indicates a reference value whereas there is no ref as we take input
    scanf("%d", q);

    printf("Enter the first integer:");
    scanf("%d", r);

    if( *p > *q && *q>*r){                     // if-else condition used to check which value is largest
        printf("The largest number is %d", *p);
    }
    else if ( *q > *p && *q>*r ){
        printf("The largest number is %d", *q);
    }
    else if ( *r > *p && *r > *q){
        printf("The largest number is %d", *r);
    }
    else{
        printf("try again");
    }
    return 0;

}