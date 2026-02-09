#include<stdio.h>
int main() {
    int age;
    char gender;
    char mart_stat;
    printf("\nEnter age:");
    scanf("%d", &age);

    printf("\nEnter gender:");
    scanf("\n%c", &gender);

    printf("\nEnter mart_status:");
    scanf("\n%c", &mart_stat);

    if(mart_stat=='y' || mart_stat=='Y')
    {
        printf("you are insured");

    }
    else if((mart_stat=='n' || mart_stat=='N') && (gender=='m' || gender=='M') && age>30)
    {
        printf("you are insured");
    }
    else if((mart_stat=='n' || mart_stat=='N') && (gender=='f' || gender=='F') && age>25)
    {
        printf("you are insured");
    }
    else{
        printf("you are not insured");
    }
    return 0;


}