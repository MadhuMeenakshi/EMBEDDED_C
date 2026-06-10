#include <stdio.h>
#include <stdlib.h>

void displayFileAndCountLines(char *filename)
{
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    char ch;
    int lines = 0;

    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);

        if (ch == '\n')
            lines++;
    }

    fclose(fp);

    printf("\nTotal lines: %d\n", lines);
}