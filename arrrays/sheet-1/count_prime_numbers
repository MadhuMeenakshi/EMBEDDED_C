#include <stdio.h>

int main()
{
    int n, i, j, count = 0, prime;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Primes: ");

    for(i = 0; i < n; i++)
    {
        if(arr[i] < 2)
            continue;

        prime = 1;

        for(j = 2; j <= arr[i] / 2; j++)
        {
            if(arr[i] % j == 0)
            {
                prime = 0;
                break;
            }
        }

        if(prime)
        {
            printf("%d ", arr[i]);
            count++;
        }
    }

    printf("\nCount: %d", count);

    return 0;
}