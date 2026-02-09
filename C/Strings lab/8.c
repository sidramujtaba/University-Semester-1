//Write a program to count the number of vowels and consonants in a given string.
#include<stdio.h>
#include<ctype.h>  // for tolower function

int main() {
    char str[100];
    int vowels =0, consonants=0;
    int i;

    printf("Enter a string:");
    fgets(str, 100, stdin);

    for(i=0; str[i] != '\0'; i++){
        char ch = tolower(str[i]);
         // convert the variable ch to lower case
            if (ch >= 'a' && ch <= 'z') {
            if (ch =='a' || ch == 'e' || ch =='i'  || ch == 'o' || ch == 'u'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
         


    }
    printf("Number of vowels %d\n", vowels);
    printf("Number of consonants %d", consonants);

    return 0;
}
