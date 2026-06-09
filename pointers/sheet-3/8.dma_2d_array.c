#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    int rows = 4;
    int cols = 4;

    uint32_t **reg_block;

    reg_block =
        malloc(rows*sizeof(uint32_t *));

    for(int i=0;i<rows;i++)
    {
        reg_block[i] =
            malloc(cols*sizeof(uint32_t));
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            reg_block[i][j] =
                (i+1)*100 + j;
        }
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%u ",reg_block[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<rows;i++)
        free(reg_block[i]);

    free(reg_block);

    return 0;
}