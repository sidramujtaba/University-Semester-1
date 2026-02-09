// * Define a structure Student with members for name, roll number, and marks.
// * Create an array of structures to store information for five students.
// * Print the details of each student.

#include<stdio.h>
#include<string.h>

struct Student{
    char name[50];
    int roll_number;
    float marks;
};

int main (void){

    struct Student student_array[5];

    for (int i = 0; i < 5; i++){

        printf("Enter the student info above: \n");

        printf("Enter the name of the student: ");
        fgets(student_array[i].name , 50, stdin);
        student_array[i].name[strcspn(student_array[i].name, "\n")] = '\0';


        printf("Enter the roll number of the student: ");
        scanf("%d", &student_array[i].roll_number);

        printf("Enter the marks of the student: ");
        scanf("%f", &student_array[i].marks);
        //while (getchar() != '\n');  // clear input buffer

    }

    puts(" ");

    for (int i = 0; i < 5; i++){

        printf("Name of the student: %s\n\n",student_array[i].name);

        printf("Roll Number of the student: %d\n\n",student_array[i].roll_number);

        printf("Marks of the student: %.2f\n\n",student_array[i].marks);
    }


}