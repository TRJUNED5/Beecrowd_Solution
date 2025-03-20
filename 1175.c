#include<stdio.h>

int main()
{
    int arr[20],i;
    for(i=19;i>=0;i--)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<20;i++)
    {
        printf("N[%d] = %d\n",i,arr[i]);
    }

    return 0;

}
