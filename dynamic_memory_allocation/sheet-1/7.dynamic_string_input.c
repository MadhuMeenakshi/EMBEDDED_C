#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    char *copy = (char *)malloc((len + 1) * sizeof(char));

    strcpy(copy, str);

    printf("Copied String: %s", copy);

    free(copy);

    return 0;
}