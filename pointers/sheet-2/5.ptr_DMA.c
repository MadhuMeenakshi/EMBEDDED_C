#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;

    arr = (int *)malloc(5*sizeof(int));

    if(arr == NULL)
    {
        printf("Allocation Failed\n");
        return 1;
    }

    arr = (int *)realloc(arr,10*sizeof(int));

    int *temp = (int *)calloc(5,sizeof(int));

    free(temp);
    free(arr);

    return 0;
}