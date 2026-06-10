#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countBlankLines(char *filename)
{
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return -1;
    }

    char line[1000];
    int count = 0;

    while (fgets(line, sizeof(line), fp))
    {
        if (strcmp(line, "\n") == 0)
        {
            count++;
        }
    }

    fclose(fp);

    return count;
}