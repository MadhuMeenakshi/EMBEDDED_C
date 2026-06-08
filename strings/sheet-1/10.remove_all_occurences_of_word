#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "hello world hello universe";
    char word[] = "hello";

    char *pos;

    while((pos = strstr(str, word)) != NULL)
    {
        memmove(pos, pos + strlen(word),
                strlen(pos + strlen(word)) + 1);
    }

    printf("%s", str);

    return 0;
}