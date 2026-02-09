#include<stdio.h>
int square(int number);
int main(){

    for(int x =1; x <= 10; ++x) {
        
        printf(" %d", square(x)); //function call
    }
    puts("");

}
// square function definition returns the square of its parameter

int square(int number) {  // number is a copy of the function's argument
    return number * number; // returns square of number as an int
}