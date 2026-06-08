#include <stdio.h>
#include <string.h>

#define d 256
#define q 101

int main()
{
    char txt[]="abcxabcdabcdabcy";
    char pat[]="abcdabcy";

    int m=strlen(pat);
    int n=strlen(txt);

    int p=0,t=0,h=1;

    for(int i=0;i<m-1;i++)
        h=(h*d)%q;

    for(int i=0;i<m;i++)
    {
        p=(d*p+pat[i])%q;
        t=(d*t+txt[i])%q;
    }

    for(int i=0;i<=n-m;i++)
    {
        if(p==t)
        {
            int j;
            for(j=0;j<m;j++)
                if(txt[i+j]!=pat[j])
                    break;

            if(j==m)
                printf("Pattern found at %d",i);
        }

        if(i<n-m)
        {
            t=(d*(t-txt[i]*h)+txt[i+m])%q;

            if(t<0)
                t+=q;
        }
    }

    return 0;
}