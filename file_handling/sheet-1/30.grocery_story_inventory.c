#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char item[50];
    char quantity[20];
    float price;
} Inventory;

void addItem(char *filename,
             Inventory item)
{
    FILE *fp = fopen(filename, "a");

    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return;
    }

    fprintf(fp,
            "%s %s %.2f\n",
            item.item,
            item.quantity,
            item.price);

    fclose(fp);

    printf("Item added successfully.\n");
}