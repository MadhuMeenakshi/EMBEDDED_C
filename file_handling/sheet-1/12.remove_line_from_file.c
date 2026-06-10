#include <stdio.h>
#include <stdlib.h>

void removeLine(char *filename, int lineNumber)
{
    FILE *fp = fopen(filename, "r");
    FILE *temp = fopen("temp.txt", "w");

    if (fp == NULL || temp == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    char line[1000];
    int currentLine = 1;

    while (fgets(line, sizeof(line), fp))
    {
        if (currentLine != lineNumber)
        {
            fputs(line, temp);
        }

        currentLine++;
    }

    fclose(fp);
    fclose(temp);

    remove(filename);
    rename("temp.txt", filename);

    printf("Line %d removed successfully.\n", lineNumber);
}