#include<stdio.h>

int main()
{
    char str[] = "i am student of bachelor of computer science";
    int index=0;
    char cha;
    int var;

    while (str[index] != '\0')
    {
        
        if (index == 0){    // For making the first character uppercase.
            cha = str[index]-32;
            str[index] = cha;


        }
        
        
        if(str[index] == ' '){  // for making the letter uppercase which comes after empty space.
            
            cha = str[index + 1]-32;

            str[index+1] = cha;

        }

        printf("%c", str[index++]);
        
    }
}

/*#include <stdio.h>

int main() {
    char str[100] = "i am a bachelor student of computer science";

    for (int i = 0; str[i] != '\0'; i++) {

        // capitalize first letter
        if (i == 0) {
            str[i] = str[i] - 32;
        }

        // capitalize letter after space
        if (str[i] == 32 && str[i+1] != '\0') {
            str[i+1] = str[i+1] - 32;
        }

        printf("%c", str[i]);
    }
    return 0;
}*/

/*#include<stdio.h>
int main() {
    char str[67] ={"i am a student of bachelor of  science"};
    

    int i=0;

    while(str[i] != '\0'){
        if(i == 0){
            str[i] = str[i] -32;
            
        }

        if(str[i] == ' '){
            str[i+1] = str[i+1] - 32;
            
        }
        printf("%c", str[i++]);
    }
}*/
