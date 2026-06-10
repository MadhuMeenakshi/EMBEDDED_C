#include <stdio.h>
#include <stddef.h>

struct Test
{
    char c;
    int i;
    short s;
};

int main()
{
    printf("Size = %lu\n", sizeof(struct Test));

    printf("Offset c = %lu\n", offsetof(struct Test,c));
    printf("Offset i = %lu\n", offsetof(struct Test,i));
    printf("Offset s = %lu\n", offsetof(struct Test,s));

    return 0;
}