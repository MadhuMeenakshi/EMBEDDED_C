#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countSemicolonLines(char *filename)
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
        int len = strlen(line);

        while (len > 0 &&
              (line[len - 1] == '\n' ||
               line[len - 1] == '\r'))
        {
            len--;
        }

        if (len > 0 && line[len - 1] == ';')
        {
            count++;
        }
    }

    fclose(fp);

    return count;
}