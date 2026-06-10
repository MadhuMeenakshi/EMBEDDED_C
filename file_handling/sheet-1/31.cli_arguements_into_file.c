#include <stdio.h>
#include <stdlib.h>

void saveSumToFile(char *filename,
                   int argc,
                   char *argv[])
{
    int sum = 0;

    for (int i = 1; i < argc; i++)
    {
        sum += atoi(argv[i]);
    }

    FILE *fp = fopen(filename, "w");

    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    fprintf(fp, "%d", sum);

    fclose(fp);

    printf("Sum saved successfully.\n");
}