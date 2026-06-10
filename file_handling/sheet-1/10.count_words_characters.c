#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void countWordsAndCharacters(char *filename)
{
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    int words = 0;
    int characters = 0;
    int inWord = 0;

    char ch;

    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;

        if (isspace(ch))
        {
            inWord = 0;
        }
        else if (!inWord)
        {
            words++;
            inWord = 1;
        }
    }

    fclose(fp);

    printf("Words: %d\n", words);
    printf("Characters: %d\n", characters);
}