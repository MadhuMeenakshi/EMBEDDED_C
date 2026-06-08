#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "programming";
    int len = strlen(str);

    for(int i = 0; i < len; i++)
    {
        for(int j = i + 1; j < len;)
        {
            if(str[i] == str[j])
            {
                for(int k = j; k < len; k++)
                    str[k] = str[k + 1];
                len--;
            }
            else
                j++;
        }
    }

    printf("%s", str);
    return 0;
}