#include <stdio.h>

int main()
{
    int n,i;

    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int max_so_far=arr[0];
    int curr=arr[0];

    for(i=1;i<n;i++)
    {
        if(curr+arr[i] > arr[i])
            curr=curr+arr[i];
        else
            curr=arr[i];

        if(curr>max_so_far)
            max_so_far=curr;
    }

    printf("Maximum contiguous sum is %d",max_so_far);

    return 0;
}