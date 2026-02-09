#include <stdio.h>

int main() {
    int num, div = 2;
    

    for( int n=2; n<=100; n++){
        num =n;
        div =2;
        printf("\n%3d: ", num);

    while (num != 1) {
        if (num % div == 0) {
            num /= div;
            printf("%d", div);
            if (num != 1)  // To avoid comma after the last factor
                printf(", ");
        } else {
            div++;
        }
    }
}
return 0;
}
