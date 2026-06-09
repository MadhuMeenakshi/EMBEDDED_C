#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    int *arr = (int *)malloc(2 * sizeof(int));

    printf("Enter 2 values:\n");

    for (i = 0; i < 2; i++)
    {
        scanf("%d", &arr[i]);
    }

    arr = (int *)realloc(arr, 5 * sizeof(int));

    printf("Enter 3 more values:\n");

    for (i = 2; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}