#include<stdio.h>

int main() {
    int table=1, n=1;
    while (table !=11){
        while (n!=13){
            printf("%d x %d = %d\n", table,n,table*n);
            n=n+1;
        }
        printf("\n");
        table=table+1;
        
        return 0;
        }
    }
