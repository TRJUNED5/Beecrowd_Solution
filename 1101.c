#include<stdio.h>

int main()
{
    int m,n,i,j,temp;
    int sum = 0;
    for(i=0;i<100;i++){
        scanf("%d %d",&m,&n);
        if(m<=0 || n<=0)break;
        if(m>n){temp=m;m=n;n=temp;}

        for(j=m;j<=n;j++){
            printf("%d ",j);
            sum += j;
        }
        printf("Sum=%d\n",sum);
        sum = 0;
    }

    return 0;
}
