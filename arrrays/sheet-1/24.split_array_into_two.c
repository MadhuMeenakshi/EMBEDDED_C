#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("First half: ");

    for(i = 0; i < n/2; i++)
        printf("%d ", arr[i]);

    printf("\nSecond half: ");

    for(i = n/2; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}