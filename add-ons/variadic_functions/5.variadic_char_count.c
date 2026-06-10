#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int count_characters(int count, ...)
{
    va_list args;
    int total = 0;

    va_start(args, count);

    for (int i = 0; i < count; i++)
    {
        char *str = va_arg(args, char *);
        total += strlen(str);
    }

    va_end(args);

    return total;
}