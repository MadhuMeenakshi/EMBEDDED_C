#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = NULL;
    int size = 0;
    int choice;
    int value;

    while (1)
    {
        printf("\n1.Add\n2.Display\n3.Exit\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            scanf("%d", &value);

            size++;

            arr = realloc(arr, size * sizeof(int));

            arr[size - 1] = value;
        }
        else if (choice == 2)
        {
            for (int i = 0; i < size; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
        else
        {
            break;
        }
    }

    free(arr);

    return 0;
}