#include<stdio.h>
int main() {
    char str[100] = {"This is the best way to waste time"};
    

    for(int i=0; str[i] != '\0'; i++ ){
        if(str[i] == 32){
            for(int j=0; j<=i; j++){
                printf("%c", str[j]);
            }
            puts("");
        }
    

    }
    return 0;

}
