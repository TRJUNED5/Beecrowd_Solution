#include<stdio.h>
int main()
{
    float N;
    scanf("%f",&N);
    if(N >= 0 && N <= 25.0000){
        printf("Intervalo [0,25]\n",N);
    }
    else if(N >= 25.00001 && N <= 50.0000000){
        printf("Intervalo (25,50]\n",N);
    }
    else if(N >= 50.00000001 && N <= 75.0000000){
        printf("Intervalo (50,75]\n",N);
    }
    else if(N >= 75.00000001 && N <= 100.0000000){
        printf("Intervalo (75,100]\n",N);
    }
    else{
        printf("Fora de intervalo\n");
    }
    return 0;
}
