#include <stdio.h>

typedef int (*CalibArrayPtr)[10];

CalibArrayPtr get_calibration_data(void)
{
    static int calib[10] =
    {
        10,20,30,40,50,
        60,70,80,90,100
    };

    return &calib;
}

int main()
{
    CalibArrayPtr p =
        get_calibration_data();

    for(int i=0;i<10;i++)
    {
        printf("%d ",(*p)[i]);
    }

    return 0;
}