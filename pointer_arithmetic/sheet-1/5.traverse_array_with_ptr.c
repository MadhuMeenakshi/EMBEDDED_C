#include <stdio.h>

void traverseArray(int *ptr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }
}

int main()
{
    int arr[] = {100, 200, 300, 400};

    traverseArray(arr, 4);

    return 0;
}