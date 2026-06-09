#include <stdio.h>

void printSecondDouble(double *ptr)
{
    ptr = ptr + 1;

    printf("Second element is %.1f\n", *ptr);
}

int main()
{
    double darr[] = {1.1, 2.2, 3.3};

    printSecondDouble(darr);

    return 0;
}