// Develop a program to merge two arrays into a single array.
#include<stdio.h>
int main() {
    int size1;
    printf("Enter the size of the array:");
    scanf("%d", &size1);

    int Array1[size1];
    for(int i=0; i<size1; i++){
        printf("Enter the contents of the array1:");
        scanf("%d", &Array1[i]);
    }

    int size2;
    printf("Enter the size of the array:");
    scanf("%d", &size2);

    int Array2[size2];
    for(int j=0; j<size2; j++){
        printf("Enter the contents of the array2:");
        scanf("%d", &Array2[j]);
    }

    int Array_Merged[size1 + size2];

    for(int i=0; i<size1; i++){
    Array_Merged[i]= Array1[i];


}
    for(int j=0; j<size2; j++){
    Array_Merged[size1 + j]= Array2[j];


}
printf("contents of the merged array are:");
for(int i=0; i<size1 + size2; i++){
    printf(" %d", Array_Merged[i]);
}
return 0;
}
