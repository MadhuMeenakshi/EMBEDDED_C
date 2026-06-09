#include <stdio.h>

int main()
{
    unsigned int num;
    int n;

    printf("Enter number and rotate count: ");
    scanf("%u%d", &num, &n);

    unsigned int result =
        (num << n) | (num >> (32 - n));

    printf("After left rotation = %u\n", result);

    return 0;
}