#include <stdio.h>

int main() {
    int i, j;  // variable declaration

    for (i = 1; i <= 100; i++) {   // outer loop → numbers from 1 to 100
        printf("\nMultiples of %d:\n", i);  // heading for each number
        
        for (j = 1; j <= 10; j++) {         // inner loop → first 10 multiples
            int product = i * j;            // calculate product
            printf("%d x %d = %d\n", i, j, product);
        }
    }

    return 0;
}
