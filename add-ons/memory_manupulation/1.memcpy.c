#include <stdio.h>
#include <string.h>

void memcpyDemo()
{
    char source[] = "Hello World";
    char destination[20];

    memcpy(destination, source, strlen(source) + 1);

    printf("Source      : %s\n", source);
    printf("Destination : %s\n", destination);
}