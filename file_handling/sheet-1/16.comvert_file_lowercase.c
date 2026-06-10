#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void convertToLowercase(char *filename)
{
    FILE *fp = fopen(filename, "r");
    FILE *temp = fopen("temp.txt", "w");

    if (fp == NULL || temp == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    char ch;

    while ((ch = fgetc(fp)) != EOF)
    {
        fputc(tolower(ch), temp);
    }

    fclose(fp);
    fclose(temp);

    remove(filename);
    rename("temp.txt", filename);

    printf("File converted to lowercase.\n");
}