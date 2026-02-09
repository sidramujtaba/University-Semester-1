#include<stdio.h>

int main() {
    int num, max;

    for(int i=1; i<=3; i++) {
        printf("Enter any number #%d: ", i);
        scanf("%d", &num);

        if (num> max){
            max = num;
        }
    }
     printf("highest number is%d", max);

    
    
}
