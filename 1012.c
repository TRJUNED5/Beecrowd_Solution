#include<stdio.h>
#define pi 3.14159
int main()
{
   double A,B,C,D,E,F,G,H;
   scanf("%lf %lf %lf",&A,&B,&C);
   D=(1/2.0)*A*C;
   E=pi*(C*C);
   F=C*(A+B)/2;
   G=B*B;
   H=A*B;
   printf("TRIANGULO: %.3lf\n",D);
   printf("CIRCULO: %.3lf\n",E);
   printf("TRAPEZIO: %.3lf\n",F);
   printf("QUADRADO: %.3lf\n",G);
   printf("RETANGULO: %.3lf\n",H);
    return 0;
}
