#include <stdio.h>
#include <stdint.h>

unsigned int endianSwap(unsigned int x)
{
    return ((x>>24)&0x000000FF)
         | ((x>>8 )&0x0000FF00)
         | ((x<<8 )&0x00FF0000)
         | ((x<<24)&0xFF000000);
}

