#include<stdio.h>
#include<string.h>

int main() {
    char src[50];
    char dest[50];

    printf("Enter the first string:");
    fgets(src, 50, stdin);

    printf("Enter the second string:");
    fgets(dest, 50, stdin);

    strcpy(dest, src);

    printf("The original source string1 is %s\n", src);
    printf("String1 is now copied to string2, hence string 2 becomes : %s", dest);

    return 0;
}