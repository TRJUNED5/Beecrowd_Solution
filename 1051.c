#include<stdio.h>

int main()
{
    double n;
    scanf("%lf",&n);
    if(n >= 0.00 && n <= 2000.00)printf("Isento\n");
    else if(n > 2000.00 && n <= 3000.00)
    {
            n = n - 2000.00;
            n = (n*8)/100;
            printf("R$ %.2lf\n",n);
    }
    else if(n > 3000.00 && n <= 4500.00)
    {

            n = n - 3000.00;
            n = (n*18)/100;
            printf("R$ %.2lf\n",n+80);
    }
    else
    {
        n = n - 4500.00;
        n = (n*28)/100;
        printf("R$ %.2lf\n",n+80+270);
    }
        return 0;
}
