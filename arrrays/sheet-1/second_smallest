#include <stdio.h>
#include <limits.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int smallest = INT_MAX;
    int second = INT_MAX;

    for(i = 0; i < n; i++)
    {
        if(arr[i] < smallest)
        {
            second = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < second && arr[i] != smallest)
        {
            second = arr[i];
        }
    }

    printf("Second smallest element is %d", second);

    return 0;
}