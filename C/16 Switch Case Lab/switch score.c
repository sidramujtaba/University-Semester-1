// Design a program that calculates the grade for a student based on their test score. The program should take
// the test score as input and use a switch-case statement to determine the grade (A, B, C, D, or F) according to a
// predefined grading scale.

#include <stdio.h>

int main (void){

    int test_score;

    printf("Enter the marks(e.g:90/80/80/70/60)");
   
    printf("Enter the test score:");
    scanf("%d", &test_score);

    switch (test_score)    // We have capped the marks, which could either be 90,80,70,60 or 50.
    {
    case 90:
        printf("Grade : A\n");
        break;

    case 80:
        printf("Grade : B\n");
        break;

    case 70:
        printf("Grade : C\n");
        break;


    case 60:
        printf("Grade : D\n");
        break;

    case 50:
        printf("Grade : F\n");
        break;

    default:
        printf("Enter valid marks");
    
    }

}