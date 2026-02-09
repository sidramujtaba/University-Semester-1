#include <stdio.h>

int main() {
    char str1[50], str2[50];

    /* Input using scanf */
    printf("Enter a string using scanf: "); 
    scanf("%s", str1); //%s reads till Hello(1st string only) and you will not another chance to enter the next integer

    /* Clear input buffer */
    getchar();

    /* Input using gets */
    printf("Enter a string using gets: "); // although gets has the same issue as %s, but we tackle it by using get char and puts
    gets(str2);

    /* Output using printf */
    printf("\nString entered using scanf is: %s\n", str1);

    /* Output using puts */
    printf("String entered using gets is:");
    puts(str2);

    return 0;
}




