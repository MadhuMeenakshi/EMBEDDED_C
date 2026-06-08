#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int min = arr[0];
    int max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];

        else if(arr[i] < min)
            min = arr[i];
    }

    printf("Minimum element is %d\n", min);
    printf("Maximum element is %d", max);

    return 0;
}