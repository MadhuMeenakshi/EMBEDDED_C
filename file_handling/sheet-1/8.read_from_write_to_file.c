#include <stdio.h>
#include <stdlib.h>

void readWriteNumber(char *filename)
{
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    int value;

    fscanf(fp, "%d", &value);

    fclose(fp);

    printf("Read variable: %d\n", value);

    fp = fopen(filename, "w");

    fprintf(fp, "%d", 100);

    fclose(fp);

    printf("Value 100 written to file.\n");
}