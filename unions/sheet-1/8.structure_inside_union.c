#include <stdio.h>

union Data
{
    struct
    {
        int x;
        int y;
    } point;

    int value;
};

int main()
{
    union Data d;

    d.point.x = 10;
    d.point.y = 20;

    printf("x = %d\n", d.point.x);
    printf("y = %d\n", d.point.y);

    return 0;
}