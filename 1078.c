#include<stdio.h>
int main()
{
    FILE *input_file,*output_file;

    input_file = fopen("input.txt","r");
    output_file = fopen("output.txt","w");

    int n,i;
    scanf("%d",&n);

    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",i,n,i*n);
    }
    return 0;
}
