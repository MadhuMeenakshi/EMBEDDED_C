#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int i;

    int *m = (int *)malloc(n * sizeof(int));
    int *c = (int *)calloc(n, sizeof(int));

    printf("malloc values:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", m[i]);
    }

    printf("\ncalloc values:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", c[i]);
    }

    free(m);
    free(c);

    return 0;
}