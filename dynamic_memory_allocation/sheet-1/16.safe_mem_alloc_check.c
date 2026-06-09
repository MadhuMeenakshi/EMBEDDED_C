#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *ptr = (char *)malloc(1024L * 1024L * 1024L);

    if (ptr == NULL)
    {
        printf("Allocation Failed\n");
    }
    else
    {
        printf("Allocation Successful\n");
        free(ptr);
    }

    return 0;
}