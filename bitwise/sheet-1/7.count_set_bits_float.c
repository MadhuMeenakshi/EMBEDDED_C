#include <stdio.h>


int main()
{           
float f = 5.5;

unsigned int *p = (unsigned int *)&f;

unsigned int x = *p;

unsigned int count = 0;     
while(x)
{
     count += *p & 1;
    *p >>= 1;
}   
printf("Number of set bits in float: %u\n", count_set_bits(x));
return 0;
}