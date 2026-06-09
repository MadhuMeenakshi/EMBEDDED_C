#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n)
{
    int i, j, min, temp;

    for(i = 0; i < n - 1; i++)
    {
        min = i;

        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min])
                min = j;
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void insertionSort(int arr[], int n)
{
    int i, j, key;

    for(i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void sortingDemo()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int choice, i;

    void (*sortFunc[3])(int[], int) =
    {
        bubbleSort,
        selectionSort,
        insertionSort
    };

    printf("1.Bubble\n2.Selection\n3.Insertion\n");
    scanf("%d", &choice);

    sortFunc[choice - 1](arr, 5);

    printf("Sorted Array: ");

    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);
}

int main()
{
    sortingDemo();
    return 0;
}