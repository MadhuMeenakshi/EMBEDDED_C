#include <stdio.h>
#include <string.h>

int isPal(char str[],int i,int j)
{
    while(i<j)
        if(str[i++]!=str[j--])
            return 0;

    return 1;
}

int solve(char str[],int i,int j)
{
    if(i>=j || isPal(str,i,j))
        return 0;

    int min=9999;

    for(int k=i;k<j;k++)
    {
        int temp=
            solve(str,i,k)+
            solve(str,k+1,j)+1;

        if(temp<min)
            min=temp;
    }

    return min;
}

int main()
{
    char str[]="ababbbabbababa";

    printf("%d",
           solve(str,0,strlen(str)-1));

    return 0;
}