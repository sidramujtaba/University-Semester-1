#include<stdio.h>
int main() {
    int var_1=0, var_2=1, num, count;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("%d ", var_1);
     printf("%d ", var_2);

    for(count=3; count<=num; count++){
        int next= var_1 + var_2;
        printf("%d ", next);
        var_1= var_2;
        var_2= next;
    }

}

