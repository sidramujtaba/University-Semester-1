#include<stdio.h>
int main() {
    int count, ast, spc;

    for(count = 10; count >= 1; count--){ // we have used 2 loopd of for, making it a nested for loop
        for(spc =10; spc >= count; spc--){
            printf("-");
        }
        for(ast =1; ast <= count; ast++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}