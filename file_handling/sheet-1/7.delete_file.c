#include <stdio.h>
#include <stdlib.h>

void deleteFile(char *filename)
{
    if (remove(filename) == 0)
    {
        printf("File '%s' deleted.\n", filename);
    }
    else
    {
        printf("Unable to delete file.\n");
    }
}