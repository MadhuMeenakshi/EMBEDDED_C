#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void incrementArray(int *arr, int size)
{
    for(int i = 0; i < size; i++)
        (*(arr+i))++;
}

int main()
{
    int x = 10, y = 20;

    swap(&x,&y);

    printf("%d %d\n",x,y);

    int arr[] = {1,2,3};

    incrementArray(arr,3);

    for(int i=0;i<3;i++)
        printf("%d ",arr[i]);

    return 0;
}