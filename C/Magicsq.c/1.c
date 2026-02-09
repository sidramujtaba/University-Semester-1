#include<stdio.h>
int main() {
    int num;
    int current_index=0; // starting the array from index=0
    int count=1;
    int previous_index= current_index;

    printf("Enter any Odd #:");
    scanf("%d", &num); //WE jave to enter 3 as the odd number

    int magicsquare[num*num]; // array magicsquare with 9 indexes (num*num)

    for(int c=0; c<num*num; c++) { // declaring all array indexes =0
        magicsquare[c]=0;
    }
    current_index=num/2; // current_index position =1 for first iteration cuz num has 3
    magicsquare[current_index] =count;// store count(which is 1) on index position 1

    //____________________________________________________________________________________________________

    while(count !=num*num){
        //Go Top
        if(current_index - num<0){
            current_index = current_index + (num*num) - num;

        }
        else{
            current_index = current_index - num;
        }
        //____________________________________________________________________________________________________

        // Go Right
        if((current_index +1) %num == 0){
            current_index= current_index -(num-1);
        }
        else{
            current_index++;
        }
        //_________________________________________________________________________________________________
        // if an existing value is found on that specific index then +3 the current index

        if(magicsquare[current_index] !=0) {
            current_index= previous_index;
            current_index= current_index + num; // current index +3
        }
        //________________________________________________________________________________________________

        magicsquare[current_index]= ++count;
        previous_index= current_index;

    }

    // Display
    for(int i=0; i<num*num; i++){
        printf("%2d", magicsquare[i]);
        if((i+1) %num ==0){
            printf("\n");
        }
    }
}