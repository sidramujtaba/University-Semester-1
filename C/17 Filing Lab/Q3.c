// Develop a C program that copies the contents of one file (e.g.,
// "source.txt") to another file (e.g., "destination.txt"). Ensure that the program works correctly
// with files of different sizes.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (){
    FILE *srcfile, *dstfile;
    char character;

   
    srcfile = fopen("C:\\VSCode\\C\\S1-Y1\\CSCL 1103 Lab - Fundamentals of Programming - Idrees Darbar\\Week 16\\CODE FILES - Filing in C\\userdata.txt", "r");

    if (srcfile == NULL){
        printf("Error: Cannot open the file (userDetails.txt)!\n");
        exit(1);
    }

    
    dstfile = fopen("C:\\VSCode\\C\\S1-Y1\\CSCL 1103 Lab - Fundamentals of Programming - Idrees Darbar\\Week 16\\CODE FILES - Filing in C\\Destination.txt", "w");

    
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