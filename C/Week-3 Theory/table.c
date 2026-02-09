#include <stdio.h>

int main()
{
    // while used when we want to repeat a set of statements as long as a given condition is true.
    int table=5, n=1;
    while (n != 12)
    {
        printf("%d x %d = %d\n", table, n, table*n);
        n = n + 1;
    }
    

}