#include <stdio.h>
#include <stdint.h>

int main()
{
    int count=0;
    uint16_t num;

    while(num)
    {
        num = num & (num-1);
        count++;
    }
    return 0;
}           
    