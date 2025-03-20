#include<stdio.h>
int main()
{
    int x;
    float y;
    double z;
    scanf("%d %f",&x,&y);
    z=x/y;
    printf("%.3lf km/l\n",z);
    return 0;
}
