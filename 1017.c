#include<stdio.h>
int main()
{
    int Time,Average_speed,Distance;
    float Total_liters;
    scanf("%d %d",&Time,&Average_speed);
    Distance = Time*Average_speed;
    Total_liters=Distance/12.0;
    printf("%.3f\n",Total_liters);
    return 0;
}
