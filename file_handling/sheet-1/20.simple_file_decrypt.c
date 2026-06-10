#include <stdio.h>
#include <stdlib.h>

void decryptFile(char *filename)
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
        fputc(ch - 3, temp);
    }

    fclose(fp);
    fclose(temp);

    remove(filename);
    rename("temp.txt", filename);

    printf("File decrypted successfully.\n");
}