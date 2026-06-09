#include <stdio.h>

void findDistance(int *p1, int *p2)
{
    printf("Distance between pointers is %ld\n", p1 - p2);
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10};

    int *p1 = &arr[4];
    int *p2 = &arr[1];

    findDistance(p1, p2);

    return 0;
}