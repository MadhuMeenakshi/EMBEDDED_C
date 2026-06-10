#include <stdio.h>
#include <stdlib.h>

void readLinesIntoArray(char *filename)
{
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    char lines[100][100];
    int count = 0;

    while (fgets(lines[count], sizeof(lines[count]), fp))
    {
        count++;
    }

    fclose(fp);

    printf("Array Elements:\n");

    for (int i = 0; i < count; i++)
    {
        printf("%s", lines[i]);
    }
}