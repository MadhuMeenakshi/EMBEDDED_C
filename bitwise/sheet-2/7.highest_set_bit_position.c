#include <stdio.h>

int main()
{
    int num, pos = -1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num)
    {
        num >>= 1;
        pos++;
    }

    printf("Highest set bit position = %d\n", pos);

    return 0;
}