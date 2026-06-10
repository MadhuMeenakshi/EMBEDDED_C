#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>

void getLastModifiedTime(char *filename)
{
    struct stat fileInfo;

    if (stat(filename, &fileInfo) != 0)
    {
        printf("Unable to get file information\n");
        return;
    }

    printf("Last Modified: %s",
           ctime(&fileInfo.st_mtime));
}