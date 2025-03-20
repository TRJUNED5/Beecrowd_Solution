#include<stdio.h>
int main()
{
   double ave,n,j = 0;
   int i,m=0;
   for(i=0;i<6;i++){
    scanf("%lf",&n);
    if(n>0){
      j += n;
     m++;
    }
   }
   ave = j/m;
   printf("%d valores positivos\n%.1lf\n",m,ave);

   return 0;
}
