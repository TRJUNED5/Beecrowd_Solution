#include<stdio.h>
int main()
{
    //FILE *input_file,*output_file;

    //input_file = fopen("input.txt","r");
    //output_file = fopen("output.txt","w");
    int n,i;
    double a,b,c,Total,Ave;
    
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%lf %lf %lf",&a,&b,&c);
        Total =(a*2+b*3+c*5);
        Ave = Total/(2+3+5);

    printf("%.1lf\n",Ave);

    }
    return 0;
}
