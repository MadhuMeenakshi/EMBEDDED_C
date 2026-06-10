#include <stdio.h>
#include <string.h>

void memsetDemo()
{
    int arr[10];

    memset(arr, 0, sizeof(arr));

    printf("Array elements: ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}