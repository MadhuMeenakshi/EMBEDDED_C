#include <stdio.h>

int main()
{       
unsigned int x = ~0;

int bits=0;

while(x)
{
    bits++;
    x >>= 1;
}

printf("%d", bits);
}