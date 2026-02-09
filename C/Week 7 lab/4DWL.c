#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int generated_num, guess;
    srand(time(NULL));

    generated_num= rand() % 100+1;
    printf("\nEnter a number between 1 and 100");
    do{
        printf("\nEnter a number to guess:");
        scanf("%d", &guess);

        if( guess> generated_num){
            printf("The number is higher");
        }
        else if( generated_num < guess){
            printf("The number is lower");
        }
        else{
            printf("You guessed it right");
        }

    } while( generated_num != guess);
    return 0;

}