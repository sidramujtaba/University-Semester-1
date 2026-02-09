/*#include<stdio.h>
int main() {
    int rows, column;
    for( rows=1; rows<=10; rows++){
        for( column=10; column>=rows; column--){
            printf("*");
        }
        puts("");
    }
    return 0;
}*/


/*#include<stdio.h>
int main() {
    int rows, column;
    for(rows=1; rows<=10; rows++){
        for(column=1; column<=rows; column++){
            printf("*");
        }
        puts("");
    }


int a,b;
for( b=rows-1; b>=1; b--){
    for(a=1; a<=b; a++){
        printf("*");
    }
    puts("");
}
}*/

/*#include<stdio.h>
int main() {
    int n=1, count, i;
    for(count=1;count<=7; count++){
        for(i=1; i<=7;i++)
            if(i<=n){
                printf("%d",i);
            }
            else{
                printf("*");
            }
        puts("");
        n++;
    }
}*/

/*#include<stdio.h>
int main() {
    int num1=0 , num2=1, next, count,n;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("%d ", num1);
    printf("%d ", num2);
    for(count=3; count<=n; count++){
        next= num1+ num2;
        printf("%d  ", next);
        num1=num2;
        num2=next;

    }
    return 0;
}*/


#include<stdio.h>
int main() {
    int n=5, count, a, spc=n-1,inc=1;
    for( count=1; count<=9; count++){
        for(a=1; a<=n; a++){
            printf(spc>=a ? "-" : "*");

            
        }
        puts("");
        if(n==9){
            inc=-1;
        }
        n=n+inc;
        spc=spc-inc;
    }
}