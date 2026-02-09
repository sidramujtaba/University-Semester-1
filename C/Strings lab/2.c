//Write a program to read a sentence and count the number of characters & words in that sentence.

#include<stdio.h>

int main() {
    char str[50] = {"I am a good girl"};
    int words=1, chars=0;

    for(int i=0; str[i] != '\0'; i++){
        if(str[i]== ' '){
            words++;
            continue;

        }
        chars++;
    }

    printf("The words in the string are %d\n", words);
    printf("The charaters in the string are %d", chars);

    return 0;
}