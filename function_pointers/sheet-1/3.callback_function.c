#include <stdio.h>

void increment(int *value)
{
    (*value)++;
}

void doubleValue(int *value)
{
    (*value) *= 2;
}

void processArray(int arr[],
                  int size,
                  void (*callback)(int *))
{
    int i;

    for(i = 0; i < size; i++)
    {
        callback(&arr[i]);
    }
}

void callbackDemo()
{
    int arr[] = {1, 2, 3, 4, 5};
    int i;

    processArray(arr, 5, increment);

    printf("After Increment:\n");

    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    printf("\n");

    processArray(arr, 5, doubleValue);

    printf("After Double:\n");

    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);
}

int main()
{
    callbackDemo();
    return 0;
}