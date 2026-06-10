#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int min_element = arr[0];
    int max_diff = arr[1] - arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] - min_element > max_diff)
            max_diff = arr[i] - min_element;

        if(arr[i] < min_element)
            min_element = arr[i];
    }

    printf("Maximum difference: %d", max_diff);

    return 0;
}