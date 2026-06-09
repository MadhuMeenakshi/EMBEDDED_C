#include <stdio.h>

int main()
{
    unsigned int num;
    int count = 0;

    printf("Enter a number: ");
    scanf("%u", &num);

    for(int i = 31; i >= 0; i--)
    {
        if(num & (1U << i))
            break;

        count++;
    }

    printf("Leading zeros = %d\n", count);

    return 0;
}