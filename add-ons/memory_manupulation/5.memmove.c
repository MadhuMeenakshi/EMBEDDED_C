#include <stdio.h>
#include <string.h>

void memmoveDemo()
{
    char str[20] = "ABCDEFG";

    memmove(str + 2, str, 5);

    printf("After memmove: %s\n", str);
}