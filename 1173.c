#include<stdio.h>

int main()
{
    int arr[10],i,n;
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        arr[i]=n;
        printf("N[%d] = %d\n",i,n);
        n += n;
    }

    return 0;

}
