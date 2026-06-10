#include <stdio.h>
#include <stdlib.h>

void appendFile(char *mainFile, char *extraFile)
{
    FILE *fp1 = fopen(mainFile, "a");
    FILE *fp2 = fopen(extraFile, "r");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    char ch;

    while ((ch = fgetc(fp2)) != EOF)
    {
        fputc(ch, fp1);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File appended successfully.\n");
}