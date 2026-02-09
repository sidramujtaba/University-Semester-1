// Create a program that asks the user for their test score and the number of attendance days. 
// Use nested if-else statements to determine their grade based on the following criteria:
//  ● A: Score >= 90 and Attendance >= 90%
//  ● B: Score >= 80 and Attendance >= 80%
//  ● C: Score >= 70 and Attendance >= 70%
//  ● D: Score >= 60 and Attendance >= 60%
//  ● F: Otherwise

#include <stdio.h>

int main() {
    float std_score, std_attendance;


    printf("Enter your test score (0-100): ");
    scanf("%f", &std_score);

    printf("Enter your attendance percentage (0-100): ");
    scanf("%f", &std_attendance);

    if (std_score >= 90){
        if (std_attendance >= 90){
            printf("Grade: A\n");
        }
        else{
            printf("Grade: F\n");
        }        
    }
    else if (std_score >= 80){
        if (std_attendance >= 80){
            printf("Grade: B\n");
        }
        else{
            printf("Grade: F\n");
        }
    }
    else if (std_score >= 70){
        if (std_attendance >= 70){
            printf("Grade: C\n");
        }
        else{
            printf("Grade: F\n");
        }
    }
    else if (std_score >= 60){
        if (std_attendance >= 60){
            printf("Grade: D\n");
        }
        else{
            printf("Grade: F\n");
        }
    }
    else{
        printf("Grade: F\n");
    }

    return 0;
}

