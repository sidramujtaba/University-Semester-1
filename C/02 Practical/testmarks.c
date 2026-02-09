#include<stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5,avg;
     printf("Enter marks in subject 1:");
     scanf("%f",&sub1);

     printf("Enter marks in subject 2:");
     scanf("%f",&sub2);

     printf("Enter marks in subject 3:");
     scanf("%f",&sub3);

     printf("Enter marks in subject 4:");
     scanf("%f",&sub4);

     printf("Enter marks in subject 5:");
     scanf("%f",&sub5);

     avg=(sub1+sub2+sub3+sub4+sub5)/5;
     printf("The average of these marks is: %f\n",avg);

     return 0;

}