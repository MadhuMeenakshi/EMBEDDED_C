#include <stdio.h>
#include <string.h>

int main()
{
    char str[3][20]={"John","Alice","Bob"};
    char temp[20];

    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }

    for(int i=0;i<3;i++)
        printf("%s\n",str[i]);
}