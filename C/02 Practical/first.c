#include <stdio.h>

int main(void) {
   int integerA = 0;
   int integerB = 0;

   printf("Enter the first integer: ");
   scanf("%d", &integerA);

   printf("Enter the second integer: ");
   scanf("%d", &integerB);

   int sum = integerA + integerB;
   printf("The sum is %d\n", sum);

   int subt = integerA - integerB;
   printf("The subtraction is %d\n", subt);

   int mult = integerA * integerB;
   printf("The multiplication is %d\n", mult);

   int div = integerA/integerB;
   printf("The division is %d\n", div);

   return 0;
}

