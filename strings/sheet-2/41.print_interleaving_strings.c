#include <stdio.h>

void interleave(char *s1,char *s2,char *res,int m,int n,int i)
{
    if(m==0 && n==0)
    {
        res[i]='\0';
        printf("%s\n",res);
        return;
    }

    if(m)
    {
        res[i]=*s1;
        interleave(s1+1,s2,res,m-1,n,i+1);
    }

    if(n)
    {
        res[i]=*s2;
        interleave(s1,s2+1,res,m,n-1,i+1);
    }
}

int main()
{
    char s1[]="AB";
    char s2[]="CD";
    char res[10];

    interleave(s1,s2,res,2,2,0);

    return 0;
}