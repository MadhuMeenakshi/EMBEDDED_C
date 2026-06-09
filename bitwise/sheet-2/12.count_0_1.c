#include <stdio.h>

int main()
{
    unsigned char num;
    int ones = 0, zeros = 0;

    printf("Enter a number (0-255): ");
    scanf("%hhu", &num);

    for(int i = 0; i < 8; i++)
    {
        if(num & (1 << i))
            ones++;
        else
            zeros++;
    }

    printf("Ones = %d\n", ones);
    printf("Zeros = %d\n", zeros);

    return 0;
}