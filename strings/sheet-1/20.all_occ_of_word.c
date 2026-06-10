#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "the sky is the limit in the sky";
    char word[] = "the";

    char *ptr = str;

    while((ptr = strstr(ptr, word)) != NULL)
    {
        printf("Found at position %ld\n", ptr - str);
        ptr += strlen(word);
    }

    return 0;
}