//Write a program to find the length of string.

#include<stdio.h>
#include<string.h>

int main() {
    char str[30] = {"I am just a girl"}; 

    printf("The length of the string is %d", strlen(str));
    return 0;
}

// the output of the above hardcored string is 16, its also counting the spaces.