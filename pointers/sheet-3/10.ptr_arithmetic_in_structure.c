#include <stdio.h>
#include <stdint.h>

struct Peripheral
{
    uint8_t status;
    uint8_t control;
    uint16_t data;
};

void modifyPeripheral(struct Peripheral *p,
                      int size)
{
    for(int i=0;i<size;i++)
    {
        (p+i)->status = i;
        (p+i)->control = i+10;
        (p+i)->data = i+100;
    }
}

int main()
{
    struct Peripheral per[5];

    modifyPeripheral(per,5);

    for(int i=0;i<5;i++)
    {
        printf("%u %u %u\n",
                per[i].status,
                per[i].control,
                per[i].data);
    }

    return 0;
}
