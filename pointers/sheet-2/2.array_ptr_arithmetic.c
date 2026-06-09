#include <stdio.h>

void reverseArray(int *start, int size)
{
    int *end = start + size - 1;

    while(start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    int arr[] = {10,20,30,40,50};

    int *p = arr;
    int sum = 0;

    while(p < arr + 5)
    {
        sum += *p;
        p++;
    }

    printf("Sum = %d\n", sum);

    reverseArray(arr, 5);

    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    return 0;
}