#include <stdio.h>
#include <stdarg.h>

void find_max_min(int count, int *max, int *min, ...)
{
    va_list args;

    va_start(args, min);

    *max = *min = va_arg(args, int);

    for (int i = 1; i < count; i++)
    {
        int num = va_arg(args, int);

        if (num > *max)
            *max = num;

        if (num < *min)
            *min = num;
    }

    va_end(args);
}