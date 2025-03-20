#include<stdio.h>
int main()
{
   int a,b,c,d;
   float e,f;
   double g;
   scanf("%d %d %f %d %d %f",&a,&b,&e,&c,&d,&f);
   g=(b*e)+(d*f);
   printf("VALOR A PAGAR: R$ %.2lf\n",g);
    return 0;
}
