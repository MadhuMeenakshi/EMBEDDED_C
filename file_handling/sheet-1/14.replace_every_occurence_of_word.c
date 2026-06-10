#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replaceWord(char *filename,
                 char *oldWord,
                 char *newWord)
{
    FILE *fp = fopen(filename, "r");
    FILE *temp = fopen("temp.txt", "w");

    if (fp == NULL || temp == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    char word[100];

    while (fscanf(fp, "%99s", word) != EOF)
    {
        if (strcmp(word, oldWord) == 0)
            fprintf(temp, "%s ", newWord);
        else
            fprintf(temp, "%s ", word);
    }

    fclose(fp);
    fclose(temp);

    remove(filename);
    rename("temp.txt", filename);

    printf("Word replacement completed.\n");
}