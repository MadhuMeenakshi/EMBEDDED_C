#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    int id;
};

int main()
{
    struct Employee *emp;

    emp = malloc(sizeof(struct Employee));

    emp->id = 100;

    printf("%d\n", emp->id);

    free(emp);

    return 0;
}