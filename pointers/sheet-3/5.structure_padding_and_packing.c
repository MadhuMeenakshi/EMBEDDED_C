#include <stdio.h>
#include <stddef.h>

struct PeripheralRegs
{
    char status;
    int control;
    short error;
};

struct __attribute__((packed)) PackedRegs
{
    char status;
    int control;
    short error;
};

int main()
{
    printf("Normal Size = %zu\n",
            sizeof(struct PeripheralRegs));

    printf("status offset = %zu\n",
            offsetof(struct PeripheralRegs,status));

    printf("control offset = %zu\n",
            offsetof(struct PeripheralRegs,control));

    printf("error offset = %zu\n",
            offsetof(struct PeripheralRegs,error));

    printf("Packed Size = %zu\n",
            sizeof(struct PackedRegs));

    return 0;
}