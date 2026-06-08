#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "engineering";
    int freq[256] = {0};

    for(int i = 0; str[i] != '\0'; i++)
        freq[str[i]]++;

    int max = 0;
    char ch;

    for(int i = 0; i < 256; i++)
    {
        if(freq[i] > max)
        {
            max = freq[i];
            ch = i;
        }
    }

    printf("%c appears %d times", ch, max);

    return 0;
}