#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

void listFiles(char *directory)
{
    DIR *dir = opendir(directory);

    if (dir == NULL)
    {
        printf("Unable to open directory\n");
        return;
    }

    struct dirent *entry;

    while ((entry = readdir(dir)) != NULL)
    {
        printf("%s\n", entry->d_name);
    }

    closedir(dir);
}