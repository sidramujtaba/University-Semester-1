#include<stdio.h>
int main() {
    int count,a,n=5, inc=1;
    int spc=n-1;
    for(count=1; count<=9; count++){ // this loop represnets the vertical line
        for(a=1; a<=n; a++){ // if a=1, so a is less than n which means space that is 4 is greater than a i.e 1 so it will print -
            printf(spc >= a ? "-":"*");
        }
        puts("");
        if(n==9){
            inc=-1;
        }
        n=n+inc; // n+=inc; and n increases when we move dwon 5,6,7,8,9
        spc=spc-inc;   /*spc = spc - (-1)
                       spc = spc + 1*/
        // spc-=inc;
    }
    return 0;
}
