#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, num;

    int *freq = (int *)calloc(100, sizeof(int));

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        freq[num]++;
    }

    for (i = 0; i < 100; i++)
    {
        if (freq[i] != 0)
        {
            printf("%d -> %d\n", i, freq[i]);
        }
    }

    free(freq);

    return 0;
}