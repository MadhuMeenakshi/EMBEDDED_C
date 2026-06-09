#include <stdio.h>

void memoryVisualization()
{
    int a = 10;
    int b = 20;
    int c = 30;

    printf("Address of a = %p\n", (void*)&a);
    printf("Address of b = %p\n", (void*)&b);
    printf("Address of c = %p\n", (void*)&c);
}

int main()
{
    memoryVisualization();
    return 0;
}