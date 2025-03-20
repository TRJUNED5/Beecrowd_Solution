#include<stdio.h>
int main()
{
    int i=0;
    double x,ave,N[4];

    while(1){
        scanf("%lf",&x);
        if(x > 0 && x <= 10)
        {
            N[i] = x;
            i++;
        }
        else printf("nota invalida\n");
        if(i > 1) break;

    }
    ave = (N[0]+N[1])/2.0;

    printf("media = %.2lf\n",ave);
    return 0;
}
