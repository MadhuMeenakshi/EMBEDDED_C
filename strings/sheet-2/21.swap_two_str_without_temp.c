#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "hello";
    char str2[20] = "world";

    strcat(str1, str2);      // helloworld

    strcpy(str2, str1);      // helloworld
    strcpy(str2, str2 + strlen(str1) - strlen(str2));

    str1[strlen(str1) - strlen(str2)] = '\0';

    printf("%s %s", str1, str2);
}