#include <stdio.h>

int main()
{
    int n, i, index = 0;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++)
    {
        if(arr[i] != 0)
            arr[index++] = arr[i];
    }

    while(index < n)
        arr[index++] = 0;

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}