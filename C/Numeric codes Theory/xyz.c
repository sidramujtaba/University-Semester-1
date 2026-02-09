#include<stdio.h>
int main() {
    int user_choice;
    double converted, operation_var;

    printf("Press 1 for converting kilometers into meters:");
    printf("\nPress 2 for converting celsius into farenheit:");
    printf("\n Press 3 for converting USD into PKR:");

    printf("Enter the choice (1-3):");
    scanf("%d", &user_choice);

    switch(user_choice){
        case(1):
        printf("Enter a number in meters:");
        scanf("%lf", &operation_var);

        converted = operation_var * 1000;

        printf("The converted length into meters is : %.2lf\n", converted);
        break;

        case(2):
        printf("Enter temperature in celsius:");
        scanf("%d", &operation_var);

        converted= (operation_var*1.8) +32;

        printf("The converted temperature  to  farenheit is : %.2lf\n", converted);
        break;

        case(3):
        printf("Enter currency in USD:");
        scanf("%d", &operation_var);

        converted= (operation_var*282.98);

        printf("The converted currency  from USD to PKR is : %.2lf\n", converted);
        break;
        
        default:
        printf("Enter invalid input\n:");


    }
}