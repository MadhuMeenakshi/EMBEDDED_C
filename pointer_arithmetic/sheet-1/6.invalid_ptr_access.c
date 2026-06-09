#include <stdio.h>

void explainInvalidPointerArithmetic(void)
{
    printf("Error: Cannot add two pointers in C. Pointer addition is not defined.\n");
}

int main()
{
    explainInvalidPointerArithmetic();

    return 0;
}

/*
int arr[5];
int *p1 = &arr[1];
int *p2 = &arr[3];

int *p3 = p1 + p2;   // Invalid
*/