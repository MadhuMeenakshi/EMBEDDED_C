#include <stdio.h>
#include <stdlib.h>

void copyFile(char *sourceFile, char *destinationFile)
{
    FILE *src = fopen(sourceFile, "r");
    FILE *dest = fopen(destinationFile, "w");

    if (src == NULL || dest == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    char ch;

    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");
}