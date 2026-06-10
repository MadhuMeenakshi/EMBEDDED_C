#include <stdio.h>
#include <string.h>

int main()
{
    char s1[]="abcd";
    char s2[]="cdab";

    char temp[50];

    strcpy(temp,s1);
    strcat(temp,s1);

    if(strstr(temp,s2))
        printf("Yes");
    else
        printf("No");
}