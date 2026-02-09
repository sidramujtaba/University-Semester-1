#include<stdio.h>
int add(int num1, int num2);

int main() {
    int count = 10;
    printf("%d", add(add(1,2),3));
    count = add(count, 1);
}

int add(int num1, int num2){
    return num1 + num2;
}