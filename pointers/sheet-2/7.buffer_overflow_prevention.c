#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;

    printf("Enter size: ");
    scanf("%d",&size);

    char *buffer = (char *)malloc(size);

    if(buffer == NULL)
        return 1;

    printf("Enter text: ");

    fgets(buffer,size,stdin);
    fgets(buffer,size,stdin);

    printf("%s",buffer);

    free(buffer);

    return 0;
}