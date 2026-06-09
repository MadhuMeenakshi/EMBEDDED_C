#include <stdio.h>


unsigned setbits(unsigned x,int p,int n,unsigned y)
{
    return (x & ~( ((1<<n)-1) << (p-n+1) ))
          |
          ((y & ((1<<n)-1))
          << (p-n+1));
}