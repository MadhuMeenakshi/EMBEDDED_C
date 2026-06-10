#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "this is a test string";
    char word[] = "test";

    char *ptr = strstr(str, word);

    if(ptr)
        printf("Found at position %ld", ptr - str);
    else
        printf("Not found");

    return 0;
}