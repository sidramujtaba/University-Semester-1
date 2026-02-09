#include<stdio.h>
int main() {
    int num=3, index=0, count=1;

    int ms[9] ={0};

    index = num/2;
    ms[index] = count;

    for(int i =0; i<num*num; i++){
        printf("%2d", ms[i]);
        if((i+1) % num == 0){
            printf("\n");
        }
    }
    return 0;
}