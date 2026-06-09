#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

void mathematicalOperationsDemo()
{
    int choice;
    int a, b;

    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    int (*operation)(int, int);

    switch(choice)
    {
        case 1: operation = add; break;
        case 2: operation = subtract; break;
        case 3: operation = multiply; break;
        case 4: operation = divide; break;
        default: return;
    }

    printf("Result = %d\n", operation(a, b));
}

int main()
{
    mathematicalOperationsDemo();
    return 0;
}