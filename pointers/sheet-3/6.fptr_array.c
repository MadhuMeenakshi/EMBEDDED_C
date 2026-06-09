#include <stdio.h>

void init(void)
{
    printf("Initialization\n");
}

void start(void)
{
    printf("Start Device\n");
}

void stop(void)
{
    printf("Stop Device\n");
}

int main()
{
    void (*cmd_table[])(void) =
    {
        init,
        start,
        stop
    };

    int command = 1;

    cmd_table[command]();

    return 0;
}