// Write a program to find address of two integer varaiables and find the distance between their blocks in the memory.

#include<stdio.h>
int main() {
    int x = 20, y = 34;
    int *p = &x, *q =&y;

    printf("Address of x = %p\n", p);
    printf("Address of y = %p\n", q);

    long distance = (char*)q - (char*)p; //long is used for distance as it has wider range than other data types
    if(distance < 0)

    
    distance = -distance; // negative sign is to make distance positive
    printf("The distance between x and y in memory is: %ld",distance);
return 0;
}
//char = 1 byte
//int = 4 byte
// long = 8 byte
// double = 8 byte
//float = 4 byte
// 1 byte = 8 bit
// the reason you are always getting 4 in output cuz its a integer value
// cuz if you use double as data type you will get 8 in ouput
