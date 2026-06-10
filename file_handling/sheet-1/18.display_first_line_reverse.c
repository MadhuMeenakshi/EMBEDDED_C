#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseFileLines(char *filename)
{
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    char lines[100][1000];
    int count = 0;

    while (fgets(lines[count], sizeof(lines[count]), fp))
    {
        count++;
    }

    fclose(fp);

    printf("Lines in Reverse Order:\n");

    for (int i = count - 1; i >= 0; i--)
    {
        printf("%s", lines[i]);
    }
}