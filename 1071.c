#include<stdio.h>

int main()
{
    int x,y,i,sum = 0,temp;
    scanf("%d %d",&x ,&y);

    if(x < y){
    for(i = x+1;i<y;i++){
        if(i % 2 != 0)
            sum = sum + i;
    }
    }
    else{
        for(i = y+1;i<x;i++){
        if(i % 2 != 0)
            sum += i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
