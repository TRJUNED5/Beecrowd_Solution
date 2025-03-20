#include<stdio.h>
int main()
{
    int x,y,m=0,i=0,g=0,d=0,a;
    while(1)
    {
        scanf("%d %d",&x,&y);
        printf("Novo grenal (1-sim 2-nao)\n");
        m++;
        if(x>y)i++;
        else if(x<y)g++;
        else d++;
        scanf("%d",&a);
        if(a==1)continue;
        else break;
    }

        printf("%d grenais\n",m);
        printf("Inter:%d\n",i);
        printf("Gremio:%d\n",g);
        printf("Empates:%d\n",d);

        if(i>g) printf("Inter venceu mais\n");
        else if(i<g) printf("Gremio venceu mais\n");
        else printf("Não houve vencedor\n");
        return 0;

}
