#include<stdio.h>
int main()
{
    //FILE *input_file, *output_file;

    //input_file = fopen("input.txt","r");
    //output_file = fopen("output.txt","w");

    int X,i;
    scanf("%d",&X);
    if(X % 2 ==0)X++;
    for(i=0;i<6;i++){
        printf("%d\n",X);
        X=X+2;
    }
    return 0;
}
