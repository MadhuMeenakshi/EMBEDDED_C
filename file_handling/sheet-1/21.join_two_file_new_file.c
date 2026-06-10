#include <stdio.h>
#include <stdlib.h>

void joinFiles(char *file1, char *file2, char *newFile)
{
    FILE *fp1 = fopen(file1, "r");
    FILE *fp2 = fopen(file2, "r");
    FILE *fp3 = fopen(newFile, "w");

    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    char ch;

    while ((ch = fgetc(fp1)) != EOF)
        fputc(ch, fp3);

    while ((ch = fgetc(fp2)) != EOF)
        fputc(ch, fp3);

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    printf("Files merged successfully.\n");
}   