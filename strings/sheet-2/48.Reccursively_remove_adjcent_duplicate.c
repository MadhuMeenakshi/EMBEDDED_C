#include <stdio.h>
#include <string.h>

void removeDup(char str[])
{
    int len=strlen(str);

    for(int i=0;i<len-1;i++)
    {
        if(str[i]==str[i+1])
        {
            int j=i;

            while(str[j]==str[j+1])
                j++;

            memmove(&str[i],
                    &str[j+1],
                    len-j);

            removeDup(str);
            return;
        }
    }
}

int main()
{
    char str[]="azxxzy";

    removeDup(str);

    printf("%s",str);

    return 0;
}