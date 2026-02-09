#include<stdio.h>
int main() {
    int count, ast, spc =1;
    for(count = 1; count <= 10; count++) {
        for( ast=1; ast <= 10; ast++){
            printf(spc > ast ? "-":"*");
        }
        spc++;
        printf("\n");
    }
    return 0;

}