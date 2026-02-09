// OBSELETE LOGIC
/*#include<stdio.h>
int main() {
    int count,i, rows;
    for( count=1; count<=7; count++){
        for( i=1; i<=count; i++){
            printf("%d", i);
        }
        for( rows= count; rows<=7; rows++){  // this loop starts from the count from where the last loop left so that relevant number of * are printed.
         printf("*");
        }
        puts("");

    }
}*/


#include<stdio.h>
int main() {
    int n=1, count, i;
    for( count=1; count<=7; count++){
        for( i=1; i<=7; i++)
        if (i<=n){
            printf("%d", i);
        }
        else{
            printf("*");
        }
        
        puts("");
        n++;
    }
    
}