#include <stdio.h>

int main()
{
    int n, pos, value, i;

    scanf("%d", &n);

    int arr[100];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d %d", &value, &pos);

    for(i = n; i > pos; i--)
        arr[i] = arr[i-1];

    arr[pos] = value;
    n++;

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}