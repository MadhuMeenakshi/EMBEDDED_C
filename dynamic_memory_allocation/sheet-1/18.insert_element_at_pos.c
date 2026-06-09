#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, pos, value;

    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d%d", &pos, &value);

    arr = realloc(arr, (n + 1) * sizeof(int));

    for (i = n; i > pos - 1; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;

    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}