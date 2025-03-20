#include<stdio.h>
int main()
{
  int n,i,j=0,k=0,l=0,m=0;

  for(i=1;i<=5;i++)
  {
      scanf("%d",&n);
      if(n%2 == 0)j++;
      else k++;
      if(n>0)l++;
      else if(n<0) m++;
  }
  printf("%d valor(es) par(es)\n",j);
  printf("%d valor(es) impar(es)\n",k);
  printf("%d valor(es) positivo(s)\n",l);
  printf("%d valor(es) negativo(s)\n",m);

  return 0;
}
