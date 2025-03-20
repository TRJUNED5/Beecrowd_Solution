#include<stdio.h>
int main()
{
    int A,B,C,i,j,k,temp;
    scanf("%d %d %d",&A,&B,&C);
    i=A;
    j=B;
    k=C;
    if(A > B){temp = A;A = B;B = temp;}
    if(A > C){temp = A;A = C;C = temp;}
    if(B > C){temp = B;B = C;C = temp;}
    printf("%d\n%d\n%d\n\n",A,B,C);
    printf("%d\n%d\n%d\n",i,j,k);
     return 0;
}

