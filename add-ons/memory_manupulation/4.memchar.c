#include <stdio.h>
#include <string.h>

void memchrDemo()
{
    char str[] = "excellent";

    char *ptr = memchr(str, 'e', strlen(str));

    if (ptr != NULL)
    {
        printf("First occurrence of 'e' found at index %ld\n", ptr - str);
    }
    else
    {
        printf("'e' not found\n");
    }
}