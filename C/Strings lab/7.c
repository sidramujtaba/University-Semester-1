//Write a program to convert all uppercase characters to lowercase and all lowercase characters to uppercase
//in a given string.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {

        if (isupper(str[i])) {
            str[i] = tolower(str[i]);   // Uppercase → Lowercase
        }
        else if (islower(str[i])) {
            str[i] = toupper(str[i]);   // Lowercase → Uppercase
        }
    }

    printf("Converted string: %s", str);

    return 0;
}
