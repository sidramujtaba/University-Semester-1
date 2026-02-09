#include<stdio.h>
int main(){
    int a,b,c,d,e,num,sum;
    printf("Enter five digit value:");
    scanf("%d",&num);
    a=(num/10000)%10;
    b=(num/1000)%10;
    c=(num/100)%10;
    d=(num/10)%10;
    e=num%10;
    sum=a+b+c+d+e;
    printf("The unit value:%d\nThe tens value: %2d\nThe hundreds value: %d\nThe thousands value: %d\nThe ten thousands value:%d\n",e,d,c,b,a);
    printf("The sum of five digits is: %d",sum);
    return 0;
}
