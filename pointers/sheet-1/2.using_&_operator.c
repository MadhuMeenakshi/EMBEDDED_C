#include <stdio.h>

void printAddresses()
{
    int x = 10;
    float y = 5.5;
    char z = 'A';

    printf("Address of x = %p\n", (void*)&x);
    printf("Address of y = %p\n", (void*)&y);
    printf("Address of z = %p\n", (void*)&z);
}

int main()
{
    printAddresses();
    return 0;
}