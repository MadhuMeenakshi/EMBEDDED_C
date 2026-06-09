#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    int **ptr = (int **)malloc(n * sizeof(int *));

    for (i = 0; i < n; i++)
    {
        ptr[i] = (int *)malloc(sizeof(int));

        *ptr[i] = (i + 1) * 10;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", *ptr[i]);
    }

    for (i = 0; i < n; i++)
    {
        free(ptr[i]);
    }

    free(ptr);

    return 0;
}