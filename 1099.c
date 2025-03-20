#include<stdio.h>
int main()
{
   int i,j,n,X,Y,a=0,temp;
   scanf("%d",&n);
   for(i=0;i<n;i++){
    scanf("%d %d",&X,&Y);
    if(X>Y){temp=X;X=Y;Y=temp;}
    if(X%2==0)X--;
    X+=2;
    for(j=X;j<Y;j+=2){
        a+=j;
    }
    printf("%d\n",a);
    a=0;
   }
        return 0;
}
