#include <stdio.h>

int main()
{
    int n, i, j, temp;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    int max_len = 1;
    int curr_len = 1;

    for(i = 1; i < n; i++)
    {
        if(arr[i] == arr[i-1] + 1)
        {
            curr_len++;

            if(curr_len > max_len)
                max_len = curr_len;
        }
        else
        {
            curr_len = 1;
        }
    }

    printf("Longest consecutive sequence length: %d", max_len);

    return 0;
}