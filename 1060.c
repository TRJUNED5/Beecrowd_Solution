#include<stdio.h>
int main()
{
    int i,a=0;
    double n;
    for(i=1;i<=6;i++)
    {
        scanf("%lf",&n);
        if(n >= 0)
            a++;
    }
    printf("%d valores positivos\n",a);
    return 0;
}
