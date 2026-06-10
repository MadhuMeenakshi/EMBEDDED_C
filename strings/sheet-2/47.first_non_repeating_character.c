#include <stdio.h>

int main()
{
    char str[]="aabc";
    int freq[256]={0};

    for(int i=0;str[i];i++)
    {
        freq[str[i]]++;

        for(int j=0;j<=i;j++)
        {
            if(freq[str[j]]==1)
            {
                printf("%c ",str[j]);
                break;
            }
        }
    }

    return 0;
}