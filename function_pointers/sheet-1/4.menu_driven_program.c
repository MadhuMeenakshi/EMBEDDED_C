#include <stdio.h>
#include <math.h>

double power(double a, double b)
{
    return pow(a, b);
}

double modulo(double a, double b)
{
    return (int)a % (int)b;
}

double squareRoot(double a, double b)
{
    return sqrt(a);
}

void calculatorDemo()
{
    double a, b;
    int choice;

    printf("1.Power\n2.Modulo\n3.Sqrt\n");
    scanf("%d", &choice);

    printf("Enter values: ");
    scanf("%lf%lf", &a, &b);

    double (*operations[3])(double, double) =
    {
        power,
        modulo,
        squareRoot
    };

    printf("Result = %.2lf\n",
           operations[choice - 1](a, b));
}

int main()
{
    calculatorDemo();
    return 0;
}