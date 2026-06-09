#include <stdio.h>
#include <stdlib.h>

int *allocate_buffer(void)
{
    int *buf =
        malloc(10*sizeof(int));

    return buf;
}

int main()
{
    int *ptr = allocate_buffer();

    ptr[0] = 100;

    free(ptr);

    /* Dangling Pointer */

    printf("%d\n",ptr[0]);

    return 0;
}