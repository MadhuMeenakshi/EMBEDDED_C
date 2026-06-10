#include <stdio.h>
#include <stdarg.h>

void my_printf(int count, ...)
{
    va_list args;

    va_start(args, count);

    printf("The values are: ");

    for (int i = 0; i < count; i++)
    {
        printf("%d ", va_arg(args, int));
    }

    printf("\n");

    va_end(args);
}