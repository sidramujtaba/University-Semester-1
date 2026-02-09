
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
    FILE *fptr;

    char word[100];

    printf("Enter a string: ");
    fgets(word, 100, stdin);

    fptr = fopen("path", "w");

    if (fptr == NULL){
        printf("The file cannot be opened\n");
        exit(1);
    }

    fprintf(fptr, "%s", word);

    fclose(fptr);


    fptr = fopen("path", "r");

    if (fptr == NULL){
        printf("The file cannot be opened\n");
        exit(1);
    }

    char newarray[100];

    fscanf(fptr, "%s", newarray);

    fclose(fptr);

    int length = strlen(newarray);

    int flag = 1;

    for (int i  = 0; i < length/2; i++){
        if (newarray[i] != newarray[length - i - 1]){
            flag = 0;
            break;
        }
    }

    if (flag == 1){
        printf("It's a palindrome!");
    }
    else{
        printf("It's not a palindrome!");
    }

    return 0;

}