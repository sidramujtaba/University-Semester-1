#include <stdio.h>

int main (void){
    int userinputone = 0;
    int userinputtwo = 0;

    printf("Enter the temperature in C - i will convert it to F: ");
    scanf("%d", &userinputone);

    printf("Enter the temperature in F - i will convert it to C: ");
    scanf("%d", &userinputtwo);

    float ctof = (userinputone * 1.8) + 32;
    
    printf("The answer is: %f\n", ctof);

    //float ftoc = (userinputtwo - 32) / 1.8;
    float ftoc = 0.56*(userinputtwo -32);
    printf("The answer is: %f\n", ftoc);


    return 0;

}