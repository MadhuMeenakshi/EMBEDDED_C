#include <stdio.h>

void nullPointerDemo()
{
    int *p = NULL;
    int a = 100;

    if(p != NULL)
    {
        printf("%d\n", *p);
    }
    else
    {
        printf("Pointer is NULL\n");
    }

    p = &a;

    if(p != NULL)
    {
        printf("Value = %d\n", *p);
    }
}

int main()
{
    nullPointerDemo();
    return 0;
}