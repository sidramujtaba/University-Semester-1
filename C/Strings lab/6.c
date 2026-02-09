//Write a program that converts all lowercase characters in a given string to its equivalent uppercase
//character.

#include<stdio.h>
int main() {
    char str[100];
    int i;

    printf("Enter a new string:");
    fgets(str, 100, stdin);

    for(i=0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;  // converts lower case into upper case
                                   // for converting upper into lower case change character to A, and str[i] +32
        }
    }

    printf("String in upper case %s", str);
    return 0;
}

/*#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    printf("String in uppercase: %s", str);

    return 0;
}*/
