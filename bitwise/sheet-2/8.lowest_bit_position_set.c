#include <stdio.h>

int main()
{
    int num, pos = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(!(num & 1))
    {
        pos++;
        num >>= 1;
    }

    printf("Lowest set bit position = %d\n", pos);

    return 0;
}