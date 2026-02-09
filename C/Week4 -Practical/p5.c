#include<stdio.h>
int main() {
    float weight, height, bmi;

    printf("Enter the height in meters:");
    scanf("%f", &height);

    printf("Enter the weight in kilograms:");
    scanf("%f", &weight);

    bmi= weight/ (height*height);

    printf("BMI = %.2f\n", bmi);

    if(bmi<18.5){
        printf("Underweight");
    }
    else if((bmi>=18.5)&&(bmi<=25)){
        printf("Normal weight");
    }
    else if((bmi>=25) &&(bmi<=30)){
        printf("overweight");
    }
    else{
        printf("Obese");
    }
    return 0;




}