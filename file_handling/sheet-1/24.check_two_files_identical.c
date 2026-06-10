#include <stdio.h>
#include <stdlib.h>

void compareFiles(char *file1, char *file2)
{
    FILE *fp1 = fopen(file1, "r");
    FILE *fp2 = fopen(file2, "r");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    char ch1, ch2;

    do
    {
        ch1 = fgetc(fp1);
        ch2 = fgetc(fp2);

        if (ch1 != ch2)
        {
            printf("Files are different.\n");

            fclose(fp1);
            fclose(fp2);

            return;
        }

    } while (ch1 != EOF && ch2 != EOF);

    printf("Files are identical.\n");

    fclose(fp1);
    fclose(fp2);
}