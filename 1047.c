#include<stdio.h>

int main()
{
    int a,b,c,d,x,n,p;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    x = (c*60 + d) - (a*60 + b);
    if(x<=0){
        x = x + 24*60;
    }
    n = x/60;
    p = x%60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",n,p);
    return 0;
}
