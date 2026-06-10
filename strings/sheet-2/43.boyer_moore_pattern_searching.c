#include <stdio.h>
#include <string.h>

#define MAX 256

int main()
{
    char txt[]="here is a simple example";
    char pat[]="example";

    int bad[MAX];

    for(int i=0;i<MAX;i++)
        bad[i]=-1;

    for(int i=0;i<strlen(pat);i++)
        bad[(int)pat[i]]=i;

    int m=strlen(pat);
    int n=strlen(txt);

    int shift=0;

    while(shift<=n-m)
    {
        int j=m-1;

        while(j>=0 && pat[j]==txt[shift+j])
            j--;

        if(j<0)
        {
            printf("Found at %d",shift);
            break;
        }

        shift+= (j-bad[txt[shift+j]] > 1)?
                j-bad[txt[shift+j]] : 1;
    }

    return 0;
}