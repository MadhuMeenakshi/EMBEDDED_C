#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t x;

    x = ((x & 0xAAAAAAAA)>>1)
      | ((x & 0x55555555)<<1);
    return 0;
}