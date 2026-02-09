#include <stdio.h>

int main() {
    float height, weight, bmi;

    printf("Enter height (in meters): ");
    scanf("%f", &height);

    printf("Enter weight (in kilograms): ");
    scanf("%f", &weight);

    bmi = weight / (height * height);

    printf("BMI = %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Category: Underweight");
    } else if (bmi >= 18.5 && bmi < 25) {
        printf("Category: Normal weight");
    } else if (bmi >= 25 && bmi < 30) {
        printf("Category: Overweight");
    } else {
        printf("Category: Obese");
    }

    return 0;
}
