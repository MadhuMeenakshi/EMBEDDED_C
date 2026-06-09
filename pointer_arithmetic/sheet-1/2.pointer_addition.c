#include <stdio.h>

void printLastElement(int *ptr, int size)
{
    printf("Last element is %d\n", *(ptr + size - 1));
}

int main()
{
    int arr[] = {5, 10, 15, 20, 25};

    printLastElement(arr, 5);

    return 0;
}