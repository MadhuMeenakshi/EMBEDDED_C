#include <stdio.h>  

int main()
{
    int count=0;
    int A, B;       

int x = A ^ B;

while(x)
{
    count++;
    x &= (x-1);
}
}