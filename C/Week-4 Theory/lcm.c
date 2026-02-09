#include <stdio.h>

int main() {
    int num, div = 2;
    printf("Enter any number: ");
    scanf("%d", &num);

    printf("LCM of %d is ", num);

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

    return 0;
}
