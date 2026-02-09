#include<stdio.h>
int main () {
    // We wil use %zu format specifier because it is used to know the size of data type
    // where z is for size and u is for unsent integer
    printf("size of char is: %zu\n", sizeof(char));
    printf("size of float is: %zu\n", sizeof(float));
    printf("size of Double is:%zu\n", sizeof(double));
    printf("size of Long Double is: %zu\n", sizeof(long double));
    return 0;

}