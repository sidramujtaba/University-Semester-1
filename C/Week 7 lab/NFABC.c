#include<stdio.h>
int main() {
    int rows, i, count;
    printf("Enter the number of rows:");
    scanf("%d", &rows);

    for( count=1; count<=rows; count++){
        for(i=1; i<=count; i++){
            printf("%c", 'M' + i - 1);
        }
        puts("");
    }
        int b,a;
        for( b=rows-1; b>=1; b--){
            for( a=1; a<=b; a++){
                printf("%d", a);

            }
            puts("");
        }
        return 0;
    
}