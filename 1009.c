#include<stdio.h>
int main()
{
    char first_name[50];
    double salary,sales,TOTAL;
    scanf("%s %lf %lf",&first_name,&salary,&sales);
    TOTAL= salary+(sales*0.15);
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
