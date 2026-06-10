#include <stdio.h>
#include <stdlib.h>

int countLines(char *filename)
{
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return -1;
    }

    int count = 0;
    char ch;

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
        {
            count++;
        }
    }

    fclose(fp);

    return count;
}