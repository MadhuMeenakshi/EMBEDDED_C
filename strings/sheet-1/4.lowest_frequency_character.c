#include <stdio.h>

int main()
{
    char str[] = "engineering";
    int freq[256] = {0};

    for(int i = 0; str[i]; i++)
        freq[str[i]]++;

    int min = 999;

    for(int i = 0; i < 256; i++)
    {
        if(freq[i] > 0 && freq[i] < min)
            min = freq[i];
    }

    printf("Characters appearing %d time(s):\n", min);

    for(int i = 0; i < 256; i++)
    {
        if(freq[i] == min)
            printf("%c ", i);
    }

    return 0;
}