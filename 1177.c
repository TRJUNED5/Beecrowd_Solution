#include<stdio.h>
int main()
{
    //FILE *input_file,*output_file;

    //input_file = fopen("input.txt","r");
    //output_file = fopen("output.txt","w");

    int N[1000],i,j=0,n;

    scanf("%d",&n);

    for(i=0;i<1000;i++){
        printf("N[%d] = %d\n",i,j);
        j++;
        if(n == j)j = 0;
    }
    return 0;
}
