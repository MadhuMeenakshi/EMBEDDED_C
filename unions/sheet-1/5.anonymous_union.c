#include <stdio.h>

struct Example
{
    int type;

    union
    {
        int num;
        float value;
    };
};

int main()
{
    struct Example e;

    e.type = 1;
    e.num = 100;

    printf("Number = %d\n", e.num);

    e.value = 45.5;

    printf("Value = %.2f\n", e.value);

    return 0;
}