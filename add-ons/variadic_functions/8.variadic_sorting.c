#include <stdio.h>
#include <stdarg.h>

void sort_numbers(int count, ...)
{
    va_list args;
    int arr[count];

    va_start(args, count);

    for (int i = 0; i < count; i++)
    {
        arr[i] = va_arg(args, int);
    }

    va_end(args);

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted numbers: ");

    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}