// Recursive factorial function

#include<stdio.h>
unsigned long long  int  factorial(int number){
    if(number<=1){ // base case is formed to stop recursion as the iteration reaches 1
        return 1;
    }
    else{ // recursive function
        return (number*factorial(number -1));
    }
}

int main() {

    printf("%d != %llu\n", 5, factorial(5));
    return 0;
}

/*Initial call: factorial(5)

number is 5, which is not ≤ 1, so go to recursive case:

return 5 * factorial(4)

But before factorial(5) can return, it must get the result of factorial(4)

Next call: factorial(4)

return 4 * factorial(3)

Must get result of factorial(3) first

Next call: factorial(3)

return 3 * factorial(2)

Next call: factorial(2)

return 2 * factorial(1)

Next call: factorial(1)

number <= 1 so base case reached

return 1*/