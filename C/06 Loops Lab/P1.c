/*#include<stdio.h>
int main() {
    int count, i, num;
    printf("Enter the number till table required:");
    scanf("%d", &num);
  
    for( count=1; count<=num; count++){
        printf("%d:\n", count);
        for( i=1; i<=10; i++){
            printf("%d x %d = %d\n", count, i, count*i);
        }
        puts("");
    }
}*/

/*#include<stdio.h>
int main() {
    int count,i;
    printf("Enter the number of which table is required:");
    scanf("%d", &count);

    for(i=1; i<=10; i++){
        printf("%d * %d = %d\n", count, i, count*i);
    }
    return 0;
}*/

/*#include<stdio.h>
int main() {
    int num, count, factorial =1;
    printf("Enter the number:");
    scanf("%d", &num);
    for( count=num; count>=1; count--){
        factorial= factorial*count;
    }
    printf("The factorial of %d is %d\n", num, factorial);
}*/


#include<stdio.h>
int main() {
    int num, count, var_1= 0, var_2= 1;
    printf("Enter the number:") ;
    scanf("%d", &num);

    printf("%d ", var_1);
    printf("%d ", var_2);
    for( count=3; count<=num; count++){

    int next = var_1 + var_2;
    printf("%d ", next);
    var_1= var_2;
    var_2 = next;
    

}
return 0;
}