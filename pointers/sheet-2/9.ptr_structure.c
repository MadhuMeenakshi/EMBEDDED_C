#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int id;
    char grade;
};

void update(struct Student *s)
{
    s->id = 101;
    s->grade = 'A';
}

int main()
{
    struct Student *s;

    s = (struct Student *)malloc(sizeof(struct Student));

    update(s);

    printf("%d %c\n",s->id,s->grade);

    free(s);

    return 0;
}