#include <stdio.h>

union MyUnion
{
    int i;
    double d;
    char c;
};

struct MyStruct
{
    int i;
    double d;
    char c;
};

int main()
{
    printf("Size of Union   = %zu bytes\n", sizeof(union MyUnion));
    printf("Size of Struct  = %zu bytes\n", sizeof(struct MyStruct));

    return 0;
}