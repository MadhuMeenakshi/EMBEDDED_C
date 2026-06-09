#include <stdio.h>

void dereferenceDemo()
{
    int a = 10;
    int *p = &a;

    *p = 20;

    printf("a = %d\n", a);
    printf("*p = %d\n", *p);
}

int main()
{
    dereferenceDemo();
    return 0;
}