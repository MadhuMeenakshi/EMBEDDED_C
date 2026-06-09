#include <stdio.h>

union Number
{
    int num;

    union
    {
        float f;
        char ch;
    } inner;
};

int main()
{
    union Number n;

    n.num = 50;
    printf("Outer Integer = %d\n", n.num);

    n.inner.f = 12.34;
    printf("Inner Float = %.2f\n", n.inner.f);

    n.inner.ch = 'A';
    printf("Inner Char = %c\n", n.inner.ch);

    return 0;
}