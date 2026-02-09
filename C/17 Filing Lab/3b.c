#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  FILE* fptr;
  char userinput1[100];
  int userinput2;

   printf("Enter the name: ");
   fgets(userinput1, 100, stdin);

   printf("Enter the age: ");
   scanf("%d", &userinput2);


   fptr = fopen("C:\\VSCode\\C\\S1-Y1\\CSCL 1103 Lab - Fundamentals of Programming - Idrees Darbar\\Week 16\\CODE FILES - Filing in C\\NewFile.txt", "a");

   
   if (fptr == NULL){
    printf("File does not exist");
    return 1; 
   }
   else{
    fprintf(fptr, "Name : %s", userinput1);
    fprintf(fptr, "Age : %d\n", userinput2);

   }

   fclose(fptr);

    FILE *srcfile, *dstfile;
    char character;

   
    srcfile = fopen("C:\\VSCode\\C\\S1-Y1\\CSCL 1103 Lab - Fundamentals of Programming - Idrees Darbar\\Week 16\\CODE FILES - Filing in C\\NewFile.txt", "r");

    if (srcfile == NULL){
        printf("Error: Cannot open the file (userDetails.txt)!\n");
        exit(1);
    }

    
    dstfile = fopen("C:\\VSCode\\C\\S1-Y1\\CSCL 1103 Lab - Fundamentals of Programming - Idrees Darbar\\Week 16\\CODE FILES - Filing in C\\Dest.txt", "w");

    
    if (dstfile == NULL) {
        printf("Error: Cannot create Destination.txt\n");
        fclose(srcfile);
        exit(1);
    }

    while((character = fgetc(srcfile)) != EOF){
        fputc(character, dstfile);
    }

    printf("File copied successfully to 'Destination.txt'\n");

    fclose(srcfile);
    fclose(dstfile);
    
    return 0;

}