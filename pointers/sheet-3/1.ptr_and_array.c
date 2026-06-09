#include <stdio.h>

void arrayPointerDemo(void)
{
    int arr[5] = {10,20,30,40,50};
    int *ptr = arr;

    printf("arr          = %p\n",(void *)arr);
    printf("ptr          = %p\n",(void *)ptr);
    printf("&arr         = %p\n",(void *)&arr);

    printf("sizeof(arr)  = %zu\n",sizeof(arr));
    printf("sizeof(ptr)  = %zu\n",sizeof(ptr));

    for(int i=0;i<5;i++)
    {
        printf("arr[%d]=%d  *(ptr+%d)=%d\n",
                i,arr[i],i,*(ptr+i));
    }
}

int main()
{
    arrayPointerDemo();
    return 0;
}