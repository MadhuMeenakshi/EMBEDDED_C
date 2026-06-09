#include <stdio.h>

void pointerCompatibility()
{
    int a = 10;
    float b = 3.14f;

    int *ip = &a;
    float *fp = &b;

    printf("Integer = %d\n", *ip);
    printf("Float = %.2f\n", *fp);
}

int main()
{
    pointerCompatibility();
    return 0;
}