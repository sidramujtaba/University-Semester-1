// Implement a recursive function Fibonacci that calculates the nth Fibonacci number. In the main function, 
// take an integer input (n) and print the nth Fibonacci number using the Fibonacci function.

#include <stdio.h>


int fibonacci(int n) {

    if (n == 0) 
        return 0;
    if (n == 1) 
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);


}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Fibonacci(%d) = %d\n", n, fibonacci(n));  // first &d refers to the user-input
                                                      // fibonacci function is being called 

    for (int i = 0; i <= n; i++){    // this is just for prinitng the whole series.

        printf("%d ", fibonacci(i));

    }                                                  
    
                                                      

    return 0;
}


// TRAVERSAL

// fibonacci(4)
// = fibonacci(3) + fibonacci(2)
//     fibonacci(3)
//     = fibonacci(2) + fibonacci(1)
//         fibonacci(2)
//         = fibonacci(1) + fibonacci(0)
//             fibonacci(1) = 1
//             fibonacci(0) = 0
//         fibonacci(2) = 1 + 0 = 1
//         fibonacci(1) = 1
//     fibonacci(3) = 1 + 1 = 2

//     fibonacci(2)
//     = fibonacci(1) + fibonacci(0)
//         fibonacci(1) = 1
//         fibonacci(0) = 0
//     fibonacci(2) = 1 + 0 = 1

// fibonacci(4) = 2 + 1 = 3
