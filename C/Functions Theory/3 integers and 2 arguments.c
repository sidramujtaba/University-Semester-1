#include <stdio.h>

int maximum(int x, int y); // function prototype

int main(void) {
   int number1 = 0; // first integer entered by the user
   int number2 = 0; // second integer entered by the user
   int number3 = 0; // third integer entered by the user
  

   printf(" %s", "Enter first integer: ");
   scanf(" %d", &number1);

   printf(" %s", "Enter second integer: ");
   scanf(" %d", &number2);

   printf(" %s", "Enter third integer: ");
   scanf(" %d", &number3);

   


   
   // number1, number2 and number3 are arguments 
   // to the maximum function call
   // 
   printf("Maximum is: %d\n", maximum(maximum(number1, number2),number3));
} 

// Function maximum definition
int maximum(int x, int y) {            
   int max = x; // assume x is largest        
                                              
   if (y > max) { // if y is larger than max, 
      max = y; // assign y to max             
   }                                                                                 
                                              
   return max; // max is largest value        
}                                           