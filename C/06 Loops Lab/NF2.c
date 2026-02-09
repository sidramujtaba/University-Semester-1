#include<stdio.h>
int main() {
    int rows,  count, i;
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    for( count=1; count<=rows; count++){
        for(i=1; i<=count; i++ ){
        printf("*");
        }
        puts("");
    }
    
    int a,b;
    for( b=rows-1; b>=1; b--){
       for( a=1; a<=b; a++){
       printf("*");
       }
       puts("");

   }
return 0;
}


