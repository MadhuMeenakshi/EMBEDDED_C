#include <stdio.h>

void display(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
}

int main()
{
    int arr[] = {5,10,15,20,25};

    display(arr, 5);

    return 0;
}