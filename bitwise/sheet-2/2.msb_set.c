#include <stdio.h>

int main()
{
    unsigned int num;

    printf("Enter a number: ");
    scanf("%u", &num);

    if(num & (1U << 31))
        printf("MSB is set\n");
    else
        printf("MSB is not set\n");

    return 0;
}