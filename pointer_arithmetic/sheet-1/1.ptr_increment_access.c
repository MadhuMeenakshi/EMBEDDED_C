#include <stdio.h>

void printThirdElement(int *ptr)
{
    ptr = ptr + 2;   // Move pointer to third element
    printf("Third element is %d\n", *ptr);
}

int main()
{
    int arr[] = {5, 10, 15, 20, 25};

    printThirdElement(arr);

    return 0;
}