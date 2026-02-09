// * Create a structure `Employee` with members for `name`, `employee ID`, and `salary`.
// * Initialize an array of structures to store information for three employees.
// * Calculate and print the total salary of all employees.


#include <stdio.h>

struct Employee{
    char name[50];
    int employeeID;
    float salary;
};


int main(void){

    struct Employee employee_array[3];
    float total_salary = 0.0;

    for (int i = 0; i < 3; i++){

        printf("Enter the employee info above: ");

        puts("");

        printf("Enter the name of the employee: ");
        scanf("%s", employee_array[i].name);

        printf("Enter the employee ID: ");
        scanf("%d", &employee_array[i].employeeID);

        printf("Enter the salary: ");
        scanf("%f", &employee_array[i].salary);

        total_salary = total_salary + employee_array[i].salary;
    }

    puts(" ");

    for (int i = 0; i < 3; i++){

        printf("Name of the employee: %s\n\n",employee_array[i].name);

        printf("ID of the employee: %d\n\n",employee_array[i].employeeID);

        printf("Salary of the employee: %.2f\n\n",employee_array[i].salary);
    }
    
    printf("Total salary of all employees: %.2f\n", total_salary);

}