#include<stdio.h>
int main()
{
    //FILE *input_file,*output_file;
    //input_file = fopen("input.txt","r");
    //output_file = fopen("output.txt","w");

    int n,t,i,total,a=0,b=0,d=0;
    char c;
    double x,y,z;

    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%d %c",&t,&c);
        if(c == 'C')a+=t;
        else if(c == 'R')b+=t;
        else d+=t;
    }
    total = a+b+d;
    x =(a*100.00)/total;
    y =(b*100.00)/total;
    z =(d*100.00)/total;

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",a);
    printf("Total de ratos: %d\n",b);
    printf("Total de sapos: %d\n",d);
    printf("Percentual de coelhos: %.2lf %%\n",x);
    printf("Percentual de ratos: %.2lf %%\n",y);
    printf("Percentual de sapos: %.2lf %%\n",z);

    return 0;
}
