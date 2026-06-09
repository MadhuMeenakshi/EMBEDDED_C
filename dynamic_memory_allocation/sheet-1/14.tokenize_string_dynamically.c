#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];

    fgets(str, sizeof(str), stdin);

    char *token = strtok(str, " ");

    while (token != NULL)
    {
        char *word = (char *)malloc(strlen(token) + 1);

        strcpy(word, token);

        printf("%s\n", word);

        free(word);

        token = strtok(NULL, " ");
    }

    return 0;
}