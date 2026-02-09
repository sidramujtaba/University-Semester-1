// Create a program that checks if a year is a leap year. The program should take a year as input and use a
// switch-case statement to determine whether it's a leap year or not.

#include<stdio.h>
int main() {
    int year_input;

    printf("Enter a year:");
    scanf("%d", & year_input);

     if ((year_input % 400 == 0) || ((year_input % 4 == 0) && (year_input % 100 != 0))){    // formula for lap year 
                                                                                            // we used selection statements to assign values to switch variable.
        year_input = 1;
     }
     else{
        year_input = 2;
     }

     switch (year_input)
     {
     case (1):
        printf("This is a leap year!");
        break;

    case (2):
        printf("This is not a leap year!");
        break;
     
     default:
        break;
     }

}