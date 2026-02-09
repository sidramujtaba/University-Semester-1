#include <stdio.h>

int main(){

    int grade = 69;

    printf("Enter grade : ");
    scanf("%d", &grade);

    if (grade >= 90)
    {
        puts("A");
    }
    else
    {
        if (grade >= 80)
        {
            puts("B");
        }
        else
        {
            if (grade >= 70)
            {
                puts("c");
            }
            else
            {
                if (grade >= 60)
                {
                    puts("D");
                }
                else
                {
                    puts("F");
                }
            }
        }
    }
