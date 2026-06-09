#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    int age;
};

int main()
{
    int n, i;

    scanf("%d", &n);

    struct Student *s =
        (struct Student *)malloc(n * sizeof(struct Student));

    for (i = 0; i < n; i++)
    {
        scanf("%s%d", s[i].name, &s[i].age);
    }

    for (i = 0; i < n; i++)
    {
        printf("%s %d\n", s[i].name, s[i].age);
    }

    free(s);

    return 0;
}