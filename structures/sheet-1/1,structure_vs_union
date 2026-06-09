#include <stdio.h>

struct Data
{
    char c;
    int i;
    float f;
};

union UData
{
    char c;
    int i;
    float f;
};

int main()
{
    struct Data s;
    union UData u;

    printf("Size of Structure = %lu\n", sizeof(s));
    printf("Size of Union = %lu\n", sizeof(u));

    s.c='A';
    s.i=10;
    s.f=3.14;

    printf("Structure: %c %d %.2f\n", s.c,s.i,s.f);

    u.c='A';
    printf("Union char = %c\n",u.c);

    u.i=10;
    printf("Union int = %d\n",u.i);

    u.f=3.14;
    printf("Union float = %.2f\n",u.f);

    return 0;
}