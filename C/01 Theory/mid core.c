/*#include<stdio.h>
int main() {
    int input, count, sum =0;

    while( sum !=100){
        sum =0;
        for( count=1; count<=4; count++){
            printf("Enter a number:");
            scanf("%d", &input);

            sum = sum + input;
        }

        if( sum ==100){
        
            printf("The sum is equal to 100");
        }
        else{
            printf("The sum is not equal to 100!\n");
        }
    }
    
}*/

/*#include <stdio.h>

int main() {
    int row, col;
    int start = 4; // starting number of first row

    for(row = 1; row <= 6; row++) {   // 6 rows
        int num = start;              // first number of each row
        for(col = 1; col <= 4; col++) {  // 4 columns
            printf("%d\t", num);
            num += 4;  // increase by 4 in each column
        }
        printf("\n");   // move to next line
        start += 3;     // next row starts 3 more than previous
    }

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int row, col;
    int start = 3; // starting number of first row

    for(row = 1; row <= 6; row++) {   // 6 rows
        int num = start;              // first number of each row
        for(col = 1; col <= 4; col++) {  // 4 columns now
            printf("%d\t", num);
            num += 3;  // increase by 3 in each column
        }
        printf("\n");   // move to next line
        start += 2;     // next row starts 2 more than previous
    }

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int n = 5;        // middle row position
    int i, j, k;
    char ch;

    for (i = 1; i <= 9; i++) {   // total 9 rows
        int spaces, letters;

        // handle top and bottom half symmetry
        if (i <= n) {
            spaces = n - i;
            letters = i;
            ch = 'V' - (i - 1);   // start letter for upper part
        } else {
            spaces = i - n;
            letters = 10 - i;
            ch = 'V' - (letters - 1); // start letter for lower part
        }

        // print leading spaces
        for (j = 1; j <= spaces; j++)
            printf(" ");

        // print letters
        for (k = 0; k < (2 * letters - 1); k++)
            printf("%c", ch + k);

        printf("\n");
    }

    return 0;
}*/


/*#include <stdio.h>

int main() {
    int num;
    int evenCount = 0, oddCount = 0;  // to count even and odd numbers

    printf("Enter numbers (enter 0 to stop):\n");

    while (1) {  // infinite loop, will break when user enters 0
        scanf("%d", &num);

        if (num == 0)  // sentinel value to stop
            break;

        if (num % 2 == 0) {
            printf("%d is even.\n", num);
            evenCount++;
        } else {
            printf("%d is odd.\n", num);
            oddCount++;
        }
    }

    printf("\nTotal even numbers: %d\n", evenCount);
    printf("Total odd numbers: %d\n", oddCount);

    return 0;
}*/

/*#include<stdio.h>
int main() {
    int num, i, j;
    for( i = 1; i<=21; i++){
        if(num== 21)
        break;
        for( j =1; j<=i; j++){
            printf("%d  ",num,num++);
        }
        puts("");
        
    }
    return 0;
}*/
/*#include<stdio.h>
int main() {
    int i, sq, cube;
    for( i =1; i<=10; i++){
        printf("%d ", i*i, sq);
    }
    puts("");
        for(i=1; i<=10; i++){
            printf("%d ", i*i*i, cube);
        }
    
}*/
/*#include<stdio.h>
int main(){
    int table, i=1;
    printf("Enter the integer:");
    scanf("%d", &table);
    while( i!= 11){
        printf("%d * %d = %d", table,i, table*i);
        puts("");
        i++;
    }
    return 0;
}*/

// fig04_06.c
// Using the do...while iteration statement.
#include <stdio.h>

int main() {
    int n;

    printf("N\t10*N\t100*N\t1000*N\n");
    printf("--------------------------------\n");

    for(n = 1; n <= 10; n++) {
        printf("%d\t%d\t%d\t%d\n", n, 10*n, 100*n, 1000*n);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int A;

    printf("A\tA+2\tA+4\tA+6\n");
    printf("----------------------\n");

    for(A = 3; A <= 15; A += 3) {
        printf("%d\t%d\t%d\t%d\n", A, A+2, A+4, A+6);
    }

    return 0;
}

