#include <stdio.h>

struct StatusReg
{
    unsigned error : 1;
    unsigned ready : 1;
    unsigned mode  : 2;
    unsigned reserved : 4;
};

int main()
{
    struct StatusReg reg = {0};

    reg.error = 1;
    reg.ready = 1;
    reg.mode = 2;

    printf("Error = %u\n", reg.error);
    printf("Ready = %u\n", reg.ready);
    printf("Mode = %u\n", reg.mode);

    return 0;
}