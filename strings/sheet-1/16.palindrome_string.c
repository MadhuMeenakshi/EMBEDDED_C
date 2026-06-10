#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "madam";

    int start = 0;
    int end = strlen(str) - 1;
    int flag = 1;

    while(start < end)
    {
        if(str[start] != str[end])
        {
            flag = 0;
            break;
        }
        start++;
        end--;
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}