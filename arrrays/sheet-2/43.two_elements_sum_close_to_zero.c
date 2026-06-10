#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int min_sum = abs(arr[0] + arr[1]);
    int a = arr[0];
    int b = arr[1];

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(abs(arr[i] + arr[j]) < min_sum)
            {
                min_sum = abs(arr[i] + arr[j]);
                a = arr[i];
                b = arr[j];
            }
        }
    }

    printf("Pair whose sum is closest to zero: %d %d", a, b);

    return 0;
}