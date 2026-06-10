#include <stdio.h>

int main()
{
    char str[] = "C programming is fun";
    int count = 1;

    for(int i = 0; str[i]; i++)
    {
        if(str[i] == ' ')
            count++;
    }

    printf("Words = %d", count);

    return 0;
}