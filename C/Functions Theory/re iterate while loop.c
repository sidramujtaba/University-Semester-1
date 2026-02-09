#include<stdio.h>
int main() {
    char str[100] = {"This is the best way to waste time"};
    int i=0;

    while(str[i] != '\0'){ // this prints the entire string to the very end
        if(str[i] == 32){  // but if a space is encountered, then we have to go with the for loop condition
            for(int j =0; j<=i; j++){
                printf("%c",str[j]);
            }
            puts("");
        }
        i++;
    }
    return 0;
}

/*String: "This is the best way to waste time"
Index:   0123456789...

Iteration 1: i=0, char='T', not a space → skip
Iteration 2: i=1, char='h', not a space → skip
Iteration 3: i=2, char='i', not a space → skip
Iteration 4: i=3, char='s', not a space → skip
Iteration 5: i=4, char=' ' (space, ASCII 32) → PRINT: str[0] to str[4] = "This"
Iteration 6: i=5, char='i', not a space → skip
Iteration 7: i=6, char='s', not a space → skip
Iteration 8: i=7, char=' ' (space) → PRINT: str[0] to str[7] = "This is"
... and so on*/