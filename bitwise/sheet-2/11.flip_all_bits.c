#include <stdio.h>

int main()
{
    unsigned char num;

    printf("Enter a number (0-255): ");
    scanf("%hhu", &num);

    printf("Flipped value = %u\n", ~num);

    return 0;
}