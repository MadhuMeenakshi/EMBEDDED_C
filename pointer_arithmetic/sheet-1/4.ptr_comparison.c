#include <stdio.h>

void comparePointers(int *ptr1, int *ptr2)
{
    if(ptr1 < ptr2)
        printf("Pointer ptr1 points to an earlier element than ptr2\n");
    else if(ptr1 > ptr2)
        printf("Pointer ptr2 points to an earlier element than ptr1\n");
    else
        printf("Both pointers point to the same element\n");
}

int main()
{
    int arr[] = {11, 22, 33, 44, 55};

    int *ptr1 = &arr[2];
    int *ptr2 = &arr[4];

    comparePointers(ptr1, ptr2);

    return 0;
}