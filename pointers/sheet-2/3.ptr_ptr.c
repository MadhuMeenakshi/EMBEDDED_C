#include <stdio.h>
#include <stdlib.h>

void allocateMemory(int **ptr)
{
    *ptr = (int *)malloc(sizeof(int));
    **ptr = 100;
}

int main()
{
    int *p = NULL;

    allocateMemory(&p);

    printf("%d\n", *p);

    free(p);

    return 0;
}