#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[50];
    int age;
} Employee;

void addEmployee(char *filename,
                 Employee emp)
{
    FILE *fp = fopen(filename, "a");

    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    fprintf(fp,
            "%s %d\n",
            emp.name,
            emp.age);

    fclose(fp);

    printf("Employee added successfully.\n");
}