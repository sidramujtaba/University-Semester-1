/*#include<stdio.h>
int cube(int n);

int main() {
    int number =5;

    int result = cube(number);
    printf("the cube of the number is %d", result);

}
int cube(int n){
    return n*n*n;
}*/

#include<stdio.h>
int cube(int *p);

int main() {
    int number =5;
    int result= cube(&number);
    printf("the cube of the number is %d", result);
}
 cube(int *p){
    *p= *p *  *p *  *p;
}



