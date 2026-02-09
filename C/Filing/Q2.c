// Reading from a File: Create a program that reads and prints the contents of the "userData.txt"
// file created in the previous question. Display the name and age of each entry.

#include <stdio.h>
#include<stdlib.h>

int main() {

   FILE* fptr;

   fptr = fopen("C:\\VSCode\\C\\Filing\\userdetails.txt", "r");

   
   if (fptr == NULL){
    printf("File does not exist");
    exit(1); 
   }

   char character; 
   while ((character = fgetc(fptr)) != EOF){
    putchar(character);
   }
  

   fclose(fptr);

}