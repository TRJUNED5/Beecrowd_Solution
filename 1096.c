#include<stdio.h>
int main()
{
    int i,j,k=7;
    for(i=1;i<=9;i+=2){
        for(j=0;j<3;j++){
            printf("I=%d J=%d\n",i,k--);
        }
        k+=3;
    }
    return 0;
}
