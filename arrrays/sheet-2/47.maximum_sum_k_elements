#include <stdio.h>

int main()
{
    int n, k, i;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    int sum = 0;

    for(i = 0; i < k; i++)
        sum += arr[i];

    int max_sum = sum;

    for(i = k; i < n; i++)
    {
        sum = sum + arr[i] - arr[i-k];

        if(sum > max_sum)
            max_sum = sum;
    }

    printf("Maximum sum of %d consecutive elements: %d", k, max_sum);

    return 0;
}