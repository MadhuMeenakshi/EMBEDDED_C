#include <stdio.h>

void incrementArray(int *p, int size)
{
    for(int i = 0; i < size; i++)
    {
        (*(p + i))++;
    }
}

void displayArray(int *p, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", *(p + i));
    }
}

int main()
{
    int arr[] = {2,4,6};

    incrementArray(arr, 3);

    displayArray(arr, 3);

    return 0;
}