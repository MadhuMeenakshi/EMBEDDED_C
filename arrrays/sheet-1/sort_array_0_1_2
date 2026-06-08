#include <stdio.h>

int main()
{
    int n, i;
    int zero = 0, one = 0, two = 0;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] == 0)
            zero++;
        else if(arr[i] == 1)
            one++;
        else
            two++;
    }

    for(i = 0; i < zero; i++)
        printf("0 ");

    for(i = 0; i < one; i++)
        printf("1 ");

    for(i = 0; i < two; i++)
        printf("2 ");

    return 0;
}