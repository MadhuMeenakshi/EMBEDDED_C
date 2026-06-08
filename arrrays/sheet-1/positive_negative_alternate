#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    int arr[n];
    int pos[n], neg[n];
    int p = 0, q = 0;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] >= 0)
            pos[p++] = arr[i];
        else
            neg[q++] = arr[i];
    }

    i = 0;
    int j = 0, k = 0;

    while(j < q && k < p)
    {
        printf("%d ", neg[j++]);
        printf("%d ", pos[k++]);
    }

    while(j < q)
        printf("%d ", neg[j++]);

    while(k < p)
        printf("%d ", pos[k++]);

    return 0;
}