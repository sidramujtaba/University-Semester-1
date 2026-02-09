/*#include<stdio.h>

int main()
{
    char str[] = "i am student of bachelor of computer science"; // str[] ist a text box where value stored
    int index=0;
    char cha;
    int var;

    
    
    while (str[index] != '\0')  // while last array index reached, run the code...
    {
        
        if(str[index] != ' '){  // if a certain array element = empty space
            
            cha = str[index]-32;  // convert to uppercase ascii from upper to lower case str[index] +32

            str[index] = cha;  // store the uppercase letters back in all array elements.

        }

        printf("%c", str[index++]);
        
    }
    

}*/

#include<stdio.h>
int main() {
    char str[100] = {"i am a bachelor student of computer science"};
    char ch;


    for(int i=0; str[i] != '\0'; i++){
        if(str[i] != 32){
            ch = str[i] -32;
            str[i] = ch;
        }
        printf("%c", str[i]);
    }
}