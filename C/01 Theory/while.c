#include<stdio.h>
int main() {
    int product =3;
    while (product <=100) {
        printf("%d * %d = %d\n", product,3, 3*product);
        product = 3* product;
    }
    return 0;
}