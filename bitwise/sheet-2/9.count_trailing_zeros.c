#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while((num & 1) == 0)
    {
        count++;
        num >>= 1;
    }

    printf("Trailing zeros = %d\n", count);

    return 0;
}