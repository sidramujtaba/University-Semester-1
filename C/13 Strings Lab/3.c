//Write a program to copy one string to another string with and without using string handling function.

#include<stdio.h>
int main() {
    char src[10], dest[10];
    int i =0; // just like array

    printf("Enter first string:");
    fgets(src, 10, stdin);

    printf("Enter the second string:");
    fgets(dest, 50, stdin);

    while (src[i] != '\0') { // this loop will execute till the string is completed, and the each charater is comes in loop index by index
        dest[i] = src[i]; // second string is assigned the value of foirst string
        i++;
    }
    dest[i] = '\0';   // terminate destination string

    printf("Source string: %s\n", src);
    printf("Copied string: %s\n", dest);

    return 0;
}




