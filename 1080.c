#include<stdio.h>
int main()
{
    int n,i,max=0,pos;
    for(i=1;i<=100;i++){
        scanf("%d",&n);
        if(n>max){
            max = n;
            pos = i;
        }
    }
    printf("%d\n%d\n",max,pos);
    return 0;
}
