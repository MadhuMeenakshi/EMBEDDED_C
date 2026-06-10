#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void capitalizeWords(char *filename)
{
    FILE *fp = fopen(filename, "r");
    FILE *temp = fopen("temp.txt", "w");

    if (fp == NULL || temp == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    char ch;
    int newWord = 1;

    while ((ch = fgetc(fp)) != EOF)
    {
        if (newWord && isalpha(ch))
        {
            ch = toupper(ch);
            newWord = 0;
        }

        if (isspace(ch))
            newWord = 1;

        fputc(ch, temp);
    }

    fclose(fp);
    fclose(temp);

    remove(filename);
    rename("temp.txt", filename);

    printf("Words capitalized successfully.\n");
}