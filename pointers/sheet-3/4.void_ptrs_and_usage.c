#include <stdio.h>
#include <string.h>

void mem_copy(void *dest,const void *src,size_t n)
{
    char *d = (char *)dest;
    const char *s = (const char *)src;

    while(n--)
    {
        *d++ = *s++;
    }
}

int main()
{
    int src[3]={10,20,30};
    int dst[3];

    mem_copy(dst,src,sizeof(src));

    for(int i=0;i<3;i++)
        printf("%d ",dst[i]);

    return 0;
}