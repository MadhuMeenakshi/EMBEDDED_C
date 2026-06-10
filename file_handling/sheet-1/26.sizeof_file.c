#include <stdio.h>
#include <stdlib.h>

long getFileSize(char *filename)
{
    FILE *fp = fopen(filename, "rb");

    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return -1;
    }

    fseek(fp, 0, SEEK_END);

    long size = ftell(fp);

    fclose(fp);

    return size;
}