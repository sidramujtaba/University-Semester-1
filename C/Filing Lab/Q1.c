// Write a C program that takes user input for a name and age and writes this
// information to a file named "userData.txt". Ensure that the program can handle multiple entries
// and appends each new entry to the file.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  FILE  *f;
  char userinput1[100];
  int userinput2;

   printf("Enter the name: ");
   fgets(userinput1, 100, stdin);

   printf("Enter the age: ");
   scanf("%d", &userinput2);


   f = fopen("C:\\VSCode\\C\\Filing\\userdetails.txt", "a");

   
   if (f == NULL){
    printf("File does not exist");
    return 1; 
   }
   else{
    fprintf(f, "Name : %s", userinput1);
    fprintf(f, "Age : %d\n", userinput2);

   }

   fclose(f);

}