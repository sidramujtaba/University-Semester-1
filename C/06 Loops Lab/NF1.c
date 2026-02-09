#include<stdio.h>
int main() {
    int rows, column;
    for( column=1; column<=10; column++){

        for( rows =1; rows<=column; rows++){
             printf("*");
        }
         puts("");
    }
}