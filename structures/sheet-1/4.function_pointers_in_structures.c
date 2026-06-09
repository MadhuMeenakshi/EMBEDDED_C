#include <stdio.h>

typedef void (*FuncPtr)(void);

void LED_ON()
{
    printf("LED ON\n");
}

void LED_OFF()
{
    printf("LED OFF\n");
}

struct Driver
{
    FuncPtr action;
};

int main()
{
    struct Driver drv;

    drv.action = LED_ON;
    drv.action();

    drv.action = LED_OFF;
    drv.action();

    return 0;
}