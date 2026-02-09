// Recursive factorial function

#include<stdio.h>
unsigned long long  int  factorial(int number);
    

int main() {
    
    for(int i=0; i<=21; ++i){

    

    printf("%d != %llu\n", i, factorial(i));
    }

    return 0;
}

unsigned long long  int  factorial(int number){
if(number<=1){ // base case is formed to stop recursion as the iteration reaches 1
        return 1;
    }
    else{ // recursive function
        return (number*factorial(number -1));
    }
}
