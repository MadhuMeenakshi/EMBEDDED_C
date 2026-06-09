#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    fp = fopen("sample.txt","r");

    if(fp == NULL)
        return 1;

    fseek(fp,0,SEEK_END);

    long size = ftell(fp);

    rewind(fp);

    char *buffer = (char *)malloc(size+1);

    fread(buffer,1,size,fp);

    buffer[size] = '\0';

    printf("%s",buffer);

    free(buffer);

    fclose(fp);

    return 0;
}