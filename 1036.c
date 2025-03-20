#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,X,R1,R2;
    scanf("%f %f %f",&A,&B,&C);
    X=B*B-4*A*C;
    if(X<0){
        printf("Impossivel calcular\n");
    }
    else if(A == 0){
        printf("Impossivel calcular\n");
    }
    else{
        R1 = (-B+sqrt(X))/(A+A);
        R2 = (-B-sqrt(X))/(A+A);
        printf("R1 = %.5f\n",R1);
        printf("R2 = %.5f\n",R2);
    }
        return 0;
}
