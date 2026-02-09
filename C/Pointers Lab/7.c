//Write a program that demonstrates the use of a null pointer. Declare a pointer, initialize it to
//NULL, and then check if it's pointing to anything before accessing the value.

#include<stdio.h>
int main() {
    int *ptr = NULL; //declaring the pointer is equal to NULL

    if(ptr == NULL){
        printf("the pointer is null and does not point to any valid memory\n"); // if-else condition used
    }
    else{
        printf("The pointer points to a specific value %d\n", *ptr);// if pinter is not equal to null, it points to a specific value
    }
    return 0;
}


/*int *ptr, x=100;

ptr = &x;

if(ptr != NULL){
    printf("The pointer points to a specific value %d\n", *ptr);
}
return 0;
}*/


