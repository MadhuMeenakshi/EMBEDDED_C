#include <stdio.h>
#include <stdlib.h>

char *myStrdup(char *str)
{
    int len = 0;

    while (str[len] != '\0')
    {
        len++;
    }

    char *copy = (char *)malloc((len + 1) * sizeof(char));

    int i;

    for (i = 0; i <= len; i++)
    {
        copy[i] = str[i];
    }

    return copy;
}

int main()
{
    char str[] = "Embedded C";

    char *dup = myStrdup(str);

    printf("%s\n", dup);

    free(dup);

    return 0;
}