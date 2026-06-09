#include <stdio.h>

struct Student
{
    int id;
    char grade;
    float marks;
};

int main()
{
    struct Student s={1,'A',95.5};

    printf("%d %c %.2f\n",
           s.id,s.grade,s.marks);

    return 0;
}