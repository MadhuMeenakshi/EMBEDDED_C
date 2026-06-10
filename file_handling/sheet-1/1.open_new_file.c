#include <stdio.h>
#include <stdlib.h>

void createAndWriteFile(char *filename, char *text)
{
    FILE *fp = fopen(filename, "w");

    if (fp == NULL)
    {
        printf("Unable to create file\n");
        return;
    }

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("File '%s' created and saved.\n", filename);
}