//Write a program to concatenate two strings.

#include<stdio.h>
#include<string.h>
int main() {



char str[30] = { " I am a girl"};
char dest[23] = {" and a vocal one"};

strcat(str, dest);

printf("Hence the concatenated string is : %s", str);

return 0;
}
