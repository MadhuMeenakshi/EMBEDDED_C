#include <stdio.h>

struct Employee
{
    int emp_id;
    char name[30];
    char type;

    union
    {
        float salary;
        float hourly_wage;
    } pay;
};

void displayEmployee(struct Employee e)
{
    printf("\nEmployee ID: %d\n", e.emp_id);
    printf("Name: %s\n", e.name);

    if(e.type == 'S')
        printf("Salary: %.2f\n", e.pay.salary);
    else
        printf("Hourly Wage: %.2f\n", e.pay.hourly_wage);
}

int main()
{
    struct Employee emp[2];

    emp[0].emp_id = 101;
    strcpy(emp[0].name, "Madhu");
    emp[0].type = 'S';
    emp[0].pay.salary = 50000;

    emp[1].emp_id = 102;
    strcpy(emp[1].name, "Kiran");
    emp[1].type = 'H';
    emp[1].pay.hourly_wage = 350;

    displayEmployee(emp[0]);
    displayEmployee(emp[1]);

    return 0;
}