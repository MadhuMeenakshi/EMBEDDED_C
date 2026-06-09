#include <stdio.h>
#include <stdint.h>

int main()
{
    uint16_t num;
    uint16_t n;
    //Check LSB
if(num & 1)
    printf("LSB Set");
else
    printf("LSB Clear");
//Check MSB
if(num & (1U<<31))
    printf("MSB Set");
else
    printf("MSB Clear");
//  Check nth Bit
if(num & (1U<<n))
    printf("Set");
else
    printf("Clear");
}