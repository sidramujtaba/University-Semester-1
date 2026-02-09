#include<stdio.h>

int main() {
    int count, ast;

    for(count = 10; count >= 1; count --){
        // printf("%d", count);
        for (ast = 1; ast <= count; ast++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}