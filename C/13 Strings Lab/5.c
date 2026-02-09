//Write a program to compare two strings.

#include<stdio.h>
#include<string.h>
int main() {
    char str1[29]= {"Sidra"},  str2[30]={"123.abc"};
    char inputname[29], inputpassword[30];

    printf("Enter the username:");
    fgets(inputname, 29, stdin);

     printf("Enter the password:");
    fgets(inputpassword, 30, stdin);

    inputname[strcspn(inputname, "\n")] = '\0';
    inputpassword[strcspn(inputpassword, "\n")] = '\0'; // this function converts the new line added to null character

    if(strcmp(str1, inputname) ==0  && strcmp(str2, inputpassword)==0){
        printf("Both the strings are similar");
    }
    else if
        (strcmp(str1, inputname) ==0){
        printf("Yes string 1 is similar");
    }
    else if
        (strcmp(str2, inputpassword) ==0){
        printf("Yes string 2 is similar");
    }
    else{
        printf("Both the strings are not similar");
    }


    return 0;
}