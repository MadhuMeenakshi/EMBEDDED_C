#include <stdio.h>
#include <stdlib.h>

void writeMultipleLines(char *filename, char lines[][100], int n)
{
    FILE *fp = fopen(filename, "w");

    if (fp == NULL)
    {
        printf("Unable to create file\n");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(fp, "%s\n", lines[i]);
    }

    fclose(fp);

    printf("All lines saved in '%s'.\n", filename);
}