


#include <stdio.h>

void garbagePointerDemo()
{
    int a = 50;
    int *p = &a;

    printf("Value = %d\n", *p);
}

int main()
{
    garbagePointerDemo();
    return 0;
}