#include<stdio.h>

int main()
{
    double X,Y;
    scanf("%lf",&X);
    if(X >= 0 && X <= 400.00 ){
            Y = (X*15)/100;
        printf("Novo salario: %.2lf\n",X+Y);
        printf("Reajuste ganho: %.2lf\n",Y);
        printf("Em percentual: 15 %\n");
    }
    else if(X >= 400.01 && X <= 800.00 ){
        Y = (X*12)/100;
        printf("Novo salario: %.2lf\n",X+Y);
        printf("Reajuste ganho: %.2lf\n",Y);
        printf("Em percentual: 12 %\n");
    }
    else if(X >= 800.01 && X <= 1200.00 ){
        Y = (X*10)/100;
        printf("Novo salario: %.2lf\n",X+Y);
        printf("Reajuste ganho: %.2lf\n",Y);
        printf("Em percentual: 10 %\n");
    }
    else if(X >= 1200.01 && X <= 2000.00 ){
        Y = (X*7)/100;
        printf("Novo salario: %.2lf\n",X+Y);
        printf("Reajuste ganho: %.2lf\n",Y);
        printf("Em percentual: 7 %\n");
    }
    else if(X > 2000.00  ){
        Y = (X*4)/100;
        printf("Novo salario: %.2lf\n",X+Y);
        printf("Reajuste ganho: %.2lf\n",Y);
        printf("Em percentual: 4 %\n");
    }
    return 0;
}

