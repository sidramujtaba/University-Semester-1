// Design a program that acts as a unit conversion calculator. It should provide options for converting between
// different units (e.g., length, temperature, currency) based on the user's choice from a menu. Use a switch-case
// statement to implement the conversions.


#include <stdio.h>

int main (void){

    int user_choice;
    double converted, operation_var;    // double because, it could either be an integer or a float

    printf("Press 1 for converting kilometers to meters: ");
    printf("\nPress 2 for converting celsius to farenheit: ");
    printf("\nPress 3 for converting USD to PKR: ");

    printf("Enter choice (1-3): ");
    scanf("%d", &user_choice);    // choice is in integer

    switch (user_choice){
        case (1): 
            printf("Enter a number in km: ");
            scanf("%lf", &operation_var);

            converted = operation_var * 1000;    // formula for converting meters to kilometers

            printf("The converted length to meters is: %.2lf\n", converted);    // .2 - to use the first two zeros after the decimal.
            break;

        case (2):
            printf("Enter the temperature in celsius: ");
            scanf("%lf", &operation_var);

                converted = (operation_var*1.8) + 32;    // formula for c - to - f C=0.56×(°F−32)

                printf("The converted temperature to fahrenheit is: %.2lf\n", converted);
                break;


        case (3):
            printf("Enter the currency in USD: ");
            scanf("%lf", &operation_var);

                converted = (operation_var*282.98);    // curremt dollar rate conversion

                printf("The converted currency from USD to PKR is: %.2lf\n", converted);
                break;


        default:
        printf("Enter invalid input");
            

    }
}