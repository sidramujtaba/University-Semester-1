/*#include<stdio.h>
int main() {
    int count, ast;
    for( count =1; count <= 10; count++){
        for( ast =1; ast<= count; ast++){
            printf("*");
        }
        puts("");
    }
    return 0;
}*/

/*#include<stdio.h>
int main() {
    int ast, count, spc=1;
    for( count =1; count<= 10; count++){
        for( ast =1; ast<= 10; ast++){
            printf(spc> ast ? "-":"*");
    }
    spc++;
    printf("\n");
}
return 0;
}*/

/*#include<stdio.h>
int main() {
    int count, ast;
    for( count = 10; count>=1; count--){
        for( ast = 1; ast<=count; ast++){
            printf("*");

    }
    puts("");
}
return 0;
}*/

/*#include<stdio.h>
int main() {
 int count, ast, spc=9; 
      for( count =1; count<=10; count++){
        for( ast =1; ast<=10; ast++){
            printf(spc >= ast ? "-":"*");
        }
        spc--;
        puts("");
    }
    return 0;

}*/
/*#include<stdio.h>
int main() {
    int count, a, n=5, inc=1;
    int spc= n-1;
    for( count =1; count<=9; count++){
        for( a=1; a<=n; a++){
            printf(spc>=a ? "-":"*");
        }
        puts("");
        if(n==9){
            inc=-1;
        }
        n+=inc;
        spc-=inc;
    }
    return 0;
}*/