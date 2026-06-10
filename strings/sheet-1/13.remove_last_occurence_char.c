#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "mississippi";
    char ch = 's';

    int pos = -1;

    for(int i = 0; str[i]; i++)
    {
        if(str[i] == ch)
            pos = i;
    }

    if(pos != -1)
    {
        for(int i = pos; str[i]; i++)
            str[i] = str[i + 1];
    }

    printf("%s", str);

    return 0;
}