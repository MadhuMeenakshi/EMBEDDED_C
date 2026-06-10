#include <stdio.h>
#include <stdarg.h>

double average(int count, ...)
{
    va_list args;
    double sum = 0.0;

    va_start(args, count);

    for (int i = 0; i < count; i++)
    {
        sum += va_arg(args, double);
    }

    va_end(args);

    return sum / count;
}