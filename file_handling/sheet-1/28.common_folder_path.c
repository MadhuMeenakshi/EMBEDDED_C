#include <stdio.h>
#include <string.h>

void commonPath(char paths[][100], int n)
{
    char common[100];

    strcpy(common, paths[0]);

    for (int i = 1; i < n; i++)
    {
        int j = 0;

        while (common[j] &&
               paths[i][j] &&
               common[j] == paths[i][j])
        {
            j++;
        }

        common[j] = '\0';
    }

    char *lastSlash = strrchr(common, '/');

    if (lastSlash)
        *lastSlash = '\0';

    printf("Common Path: %s\n", common);
}