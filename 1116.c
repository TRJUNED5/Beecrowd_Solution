#include<stdio.h>
int main()
{
  int x,y,i,n;
  double d;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      scanf("%d%d",&x,&y);
      if(y == 0)
      {
          printf("divisao impossivel\n");
      }
      else
      {
          d = (x/(y*1.00));
          printf("%.1lf\n",d);
      }
  }
  return 0;
}
