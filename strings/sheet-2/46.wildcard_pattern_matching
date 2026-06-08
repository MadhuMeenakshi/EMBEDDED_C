#include <stdio.h>

int match(char *p,char *s)
{
    if(*p=='\0' && *s=='\0')
        return 1;

    if(*p=='*')
        return match(p+1,s) ||
               (*s && match(p,s+1));

    if(*p=='?' ||
       *p==*s)
        return match(p+1,s+1);

    return 0;
}

int main()
{
    printf("%d",
           match("g*ks","geeks"));

    return 0;
}