#include <stdio.h>
#include <stdlib.h>

void mergeAlternateLines(char *file1,
                         char *file2,
                         char *newFile)
{
    FILE *fp1 = fopen(file1, "r");
    FILE *fp2 = fopen(file2, "r");
    FILE *fp3 = fopen(newFile, "w");

    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    char line1[1000];
    char line2[1000];

    while (fgets(line1, sizeof(line1), fp1) ||
           fgets(line2, sizeof(line2), fp2))
    {
        if (!feof(fp1))
            fputs(line1, fp3);

        if (!feof(fp2))
            fputs(line2, fp3);
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    printf("Alternate lines merged successfully.\n");
}