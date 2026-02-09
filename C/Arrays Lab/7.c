#include<stdio.h>
int main() {
    int arraysize=6;
    char Array[arraysize];

    for(int i=0; i<arraysize; i++){
        Array[i]= '*'; // since asterias is char use it in single inverted comma
    }

    for(int i=0; i<arraysize; i++){
        for(int j=0; j<arraysize; j++){
            printf("%c ", Array[j]);
        }
        puts("");
    }
    return 0;
}
