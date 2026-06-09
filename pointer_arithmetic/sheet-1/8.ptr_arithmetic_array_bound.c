#include <stdio.h>

void outOfBoundsAccess(void)
{
    int arr[] = {10, 20, 30};

    int *ptr = arr + 5;

    printf("%d\n", *ptr);   // Unsafe
}

int main()
{
    outOfBoundsAccess();

    return 0;
}