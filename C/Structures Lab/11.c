#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_number;
    float marks;
};

int main(void) {

    struct Student student_array[5];
    char buffer[100];

    for (int i = 0; i < 5; i++) {

        printf("\nEnter student %d details:\n", i + 1);

        // Name
        printf("Enter name: ");
        fgets(student_array[i].name, sizeof(student_array[i].name), stdin);
        student_array[i].name[strcspn(student_array[i].name, "\n")] = '\0';

        // Roll number
        printf("Enter roll number: ");
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%d", &student_array[i].roll_number);

        // Marks
        printf("Enter marks: ");
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%f", &student_array[i].marks);
    }

    printf("\n--- Student Details ---\n");

    for (int i = 0; i < 5; i++) {
        printf("Name: %s\n", student_array[i].name);
        printf("Roll Number: %d\n", student_array[i].roll_number);
        printf("Marks: %.2f\n\n", student_array[i].marks);
    }

    return 0;
}
