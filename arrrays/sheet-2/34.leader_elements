#include <stdio.h>

int main()
{
    int n,i,j,leader;

    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Leader elements: ");

    for(i=0;i<n;i++)
    {
        leader=1;

        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                leader=0;
                break;
            }
        }

        if(leader)
            printf("%d ",arr[i]);
    }

    return 0;
}