#include<stdio.h>
int main() {
    int a,b,c,d,e,num,sum;
    printf("Enter five digit value:");
    scanf("%d", &num);

    a=(num/10000)%10;
    b=(num/1000)%10;
    c=(num/100)%10;
    d=(num/10)%10;
    e=num%10;
    
    // swapping unit and hundred value

    c=c+e;
    e=c-e;
    c=c-e;

    sum =(a*10000)+(b*1000)+(c*100)+(d*10)+e;
    printf("%d",sum);
    return 0;
    


}

