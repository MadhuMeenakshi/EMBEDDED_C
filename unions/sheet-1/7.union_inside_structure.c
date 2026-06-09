#include <stdio.h>
#include <string.h>

struct Student
{
    char type;

    union
    {
        int roll_number;
        char id[10];
    } data;
};

void initRollStudent(struct Student *s, int roll)
{
    s->type = 'R';
    s->data.roll_number = roll;
}

void initIdStudent(struct Student *s, char *id)
{
    s->type = 'I';
    strcpy(s->data.id, id);
}

void displayStudent(struct Student s)
{
    if(s.type == 'R')
        printf("Roll Number: %d\n", s.data.roll_number);
    else
        printf("ID: %s\n", s.data.id);
}

int main()
{
    struct Student s1, s2;

    initRollStudent(&s1, 101);
    initIdStudent(&s2, "EMP001");

    displayStudent(s1);
    displayStudent(s2);

    return 0;
}