#include <stdio.h>

int main()
{
    unsigned int num;
    unsigned int count = 0;
    while(num)
    {
        count += num & 1; // Increment count if LSB is set
        num >>= 1; // Right shift to check the next bit
    }
    printf("Number of set bits: %u\n", count);
    return 0;
}