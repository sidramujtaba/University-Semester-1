#include<stdio.h>
int main() {
    int value;
    printf("Enter value:");
    scanf("%d", &value);
    if (value%2==0) // if the remiander after being divided by 2 is 0
    {
        printf("The value is even");

    }
else{
    printf("The value is odd");

}
return 0;
}
