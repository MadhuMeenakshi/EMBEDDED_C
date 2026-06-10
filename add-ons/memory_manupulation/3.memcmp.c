#include <stdio.h>
#include <string.h>

void memcmpDemo()
{
    char str1[] = "Embedded";
    char str2[] = "Embedded";

    if (memcmp(str1, str2, strlen(str1) + 1) == 0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }
}