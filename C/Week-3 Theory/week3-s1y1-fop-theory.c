#include<stdio.h>

int main(){
    int grade = 69;
    printf("Enter grade:");
    scanf("%d", &grade);

    if(grade>= 60){
        puts("Passed");
    }else{
        puts("Failed");

    }
    return 0;
}

