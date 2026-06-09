#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *p1 = malloc(100);
    void *p2 = malloc(200);
    void *p3 = malloc(300);

    printf("Allocated blocks\n");

    free(p2);

    printf("Middle block freed\n");

    void *p4 = malloc(150);

    printf("New block allocated\n");

    free(p1);
    free(p3);
    free(p4);

    return 0;
}