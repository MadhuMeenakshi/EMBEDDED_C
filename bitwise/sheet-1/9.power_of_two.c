#include <stdio.h>

int main()
{
    unsigned int num;
    if(num && !(num & (num-1)))
        printf("Power of 2");
    return 0;
}