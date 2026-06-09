#include <stdio.h>

void pointerToPointerDemo()
{
    int a = 5;
    int *p = &a;
    int **pp = &p;

    printf("a = %d\n", a);
    printf("*p = %d\n", *p);
    printf("**pp = %d\n", **pp);
}

int main()
{
    pointerToPointerDemo();
    return 0;
}