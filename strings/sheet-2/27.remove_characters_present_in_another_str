#include <stdio.h>
#include <string.h>

int main()
{
    char s1[]="hello world";
    char s2[]="low";

    for(int i=0;s1[i];i++)
    {
        int found=0;

        for(int j=0;s2[j];j++)
        {
            if(s1[i]==s2[j])
            {
                found=1;
                break;
            }
        }

        if(!found)
            printf("%c",s1[i]);
    }
}