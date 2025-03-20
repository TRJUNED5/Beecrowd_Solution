#include<stdio.h>
int main()
{
    float N1,N2,N3,N4,N5;
    double AVE,AVE2;
    scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
    AVE = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/(2+3+4+1) ;
    printf("Media: %.1lf\n",AVE);
    if(AVE >= 7.0){
        printf("Aluno aprovado.\n");}
    else if(AVE < 5.0){
        printf("Aluno reprovado.\n");
    }
    else{
        printf("Aluno em exame.\n");

    scanf("%f",&N5);
    printf("Nota do exame: %.1f\n",N5);
    AVE2 = (AVE+N5)/2;
    if(AVE2 >= 5.0){
        printf("Aluno aprovado.\n");
    }
    else{
        printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1lf\n",AVE2);

     return 0;}
}
