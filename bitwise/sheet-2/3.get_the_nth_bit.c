#include <stdio.h>

int main()
{
    int num, n;

    printf("Enter number and bit position: ");
    scanf("%d%d", &num, &n);

    printf("Bit %d of %d is %d\n", n, num, (num >> n) & 1);

    return 0;
}