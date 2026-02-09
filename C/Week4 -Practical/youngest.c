#include<stdio.h>
int main() {
    int Ali, Hamza, Basit;

    printf("Enter the age of ali:");
    scanf("%d", &Ali);

    printf("Enter the age of hamza:");
    scanf("%d", &Hamza);

    printf("Enter the age of basit");
    scanf("%d", &Basit);

    if( Ali < Hamza && Hamza < Basit)
    {
        printf("Ali si the youngest");
    }
    else if( Hamza < Ali && Ali < Basit)
    {
        printf("Hamza is the youngest");
    }
    else{
        printf("Basit is the youngest");
    }
    return 0;
}