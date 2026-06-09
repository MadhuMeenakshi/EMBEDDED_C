#include <stdio.h>
#include <string.h>

void reverseString(char *start)
{
    char *end = start + strlen(start) - 1;

    while(start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char str[] = "Embedded";

    reverseString(str);

    printf("%s\n", str);

    return 0;
}