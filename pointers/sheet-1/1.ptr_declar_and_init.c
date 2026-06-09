#include <stdio.h>

void pointerInitialization()
{
    int a = 5;
    int *ptr;

    ptr = &a;

    printf("Value of a = %d\n", a);
    printf("Value using pointer = %d\n", *ptr);
}

int main()
{
    pointerInitialization();
    return 0;
}