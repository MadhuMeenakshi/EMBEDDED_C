#include <stdio.h>
#include <stdlib.h>

void appendLines(char *filename, char lines[][100], int n)
{
    FILE *fp = fopen(filename, "a");

    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%s\n", lines[i]);
    }

    fclose(fp);

    printf("Data appended successfully.\n");
}