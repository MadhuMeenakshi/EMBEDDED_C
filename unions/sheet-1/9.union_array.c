#include <stdio.h>

union Value
{
    int i;
    float f;
    char c;
};

int main()
{
    union Value arr[3];

    arr[0].i = 100;
    arr[1].f = 25.5;
    arr[2].c = 'A';

    printf("Integer = %d\n", arr[0].i);
    printf("Float   = %.2f\n", arr[1].f);
    printf("Char    = %c\n", arr[2].c);

    return 0;
}