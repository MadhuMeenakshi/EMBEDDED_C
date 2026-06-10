#include <stdio.h>
#include <string.h>

int main()
{
    char *list[]={"cat","tac","act","dog"};
    char word[]="act";

    for(int i=0;i<4;i++)
    {
        int found=1;

        for(int j=0;word[j];j++)
        {
            if(strchr(list[i],word[j])==NULL)
            {
                found=0;
                break;
            }
        }

        if(found)
            printf("%s\n",list[i]);
    }

    return 0;
}