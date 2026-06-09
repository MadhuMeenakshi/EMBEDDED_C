#include <stdio.h>

int main()
{
    int num, n;

    printf("Enter number and bit position: ");
    scanf("%d%d", &num, &n);

    num &= ~(1 << n);

    printf("After clearing bit %d = %d\n", n, num);

    return 0;
}