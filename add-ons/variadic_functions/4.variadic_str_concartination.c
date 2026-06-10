#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void concat_strings(char *result, int count, ...)
{
    va_list args;

    result[0] = '\0';

    va_start(args, count);

    for (int i = 0; i < count; i++)
    {
        strcat(result, va_arg(args, char *));
    }

    va_end(args);
}