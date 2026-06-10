#include <stdio.h>
#include <stdarg.h>

int product(int count, ...)
{
    va_list args;
    int result = 1;

    va_start(args, count);

    for (int i = 0; i < count; i++)
    {
        result *= va_arg(args, int);
    }

    va_end(args);

    return result;
}