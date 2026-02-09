#include<stdio.h>
int main() {
    int table, count;
    printf("Enter the table:");
    scanf("%d", &table);

    for( count=1; count<=10; count++){
        printf("%2d x %2d = %d\n", table, count, table*count);
    }
    return 0;
}
