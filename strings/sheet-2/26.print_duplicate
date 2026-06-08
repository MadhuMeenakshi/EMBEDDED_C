#include <stdio.h>

int main()
{
    char str[]="programming";
    int freq[256]={0};

    for(int i=0;str[i];i++)
        freq[str[i]]++;

    for(int i=0;i<256;i++)
    {
        if(freq[i]>1)
            printf("%c ",i);
    }
}