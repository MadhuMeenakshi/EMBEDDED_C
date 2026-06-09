#include <stdio.h>

void compareMethods(int arr[], int size)
{
    printf("Using Index:\n");

    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nUsing Pointer Arithmetic:\n");

    for(int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
}

int main()
{
    int arr[] = {10,20,30,40,50};

    compareMethods(arr, 5);

    return 0;
}