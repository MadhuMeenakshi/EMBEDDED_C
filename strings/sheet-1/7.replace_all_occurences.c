#include <stdio.h>

int main()
{
    char str[] = "banana";

    for(int i = 0; str[i]; i++)
    {
        if(str[i] == 'a')
            str[i] = 'o';
    }

    printf("%s", str);

    return 0;
}