#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "   Hello World   ";

    int start = 0;
    int end = strlen(str) - 1;

    while(str[start] == ' ')
        start++;

    while(str[end] == ' ')
        end--;

    for(int i = start; i <= end; i++)
        printf("%c", str[i]);

    return 0;
}