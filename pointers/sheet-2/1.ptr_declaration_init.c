#include <stdio.h>
#include <stdlib.h>

void pointerDemo()
{
    int a = 10;
    float b = 5.5f;
    char c = 'A';

    int *ip = &a;
    float *fp = &b;
    char *cp = &c;

    printf("%d\n", *ip);
    printf("%.2f\n", *fp);
    printf("%c\n", *cp);

    int *arr = (int *)malloc(5 * sizeof(int));

    for(int i = 0; i < 5; i++)
        *(arr + i) = i + 1;

    for(int i = 0; i < 5; i++)
        printf("%d ", *(arr + i));

    free(arr);
}

int main()
{
    pointerDemo();
    return 0;
}