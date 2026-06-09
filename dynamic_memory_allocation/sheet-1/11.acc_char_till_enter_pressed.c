#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str = NULL;
    char ch;
    int size = 0;

    while ((ch = getchar()) != '\n')
    {
        size++;

        str = (char *)realloc(str, size + 1);

        str[size - 1] = ch;
    }

    str[size] = '\0';

    printf("%s\n", str);

    free(str);

    return 0;
}