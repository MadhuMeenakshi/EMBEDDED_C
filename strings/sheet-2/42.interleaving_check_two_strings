#include <stdio.h>
#include <string.h>

int check(char *s1,char *s2,char *s3)
{
    if(!*s1 && !*s2 && !*s3)
        return 1;

    if(*s3=='\0')
        return 0;

    return ((*s1==*s3 && check(s1+1,s2,s3+1)) ||
            (*s2==*s3 && check(s1,s2+1,s3+1)));
}

int main()
{
    printf("%d",
           check("abc","def","adbcef"));

    return 0;
}