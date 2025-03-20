#include<stdio.h>
int main()
{
    int dia,h,m,s;
    char ch[10],a,b,c;

    scanf("%s %d",ch,&dia);
    scanf("%d %c %d %c %d",&h,&a,&m,&c,&s);

    int dia2,h2,m2,s2;
    char ch2[10],a2,b2,c2;

    scanf("%s %d",ch2,&dia2);
    scanf("%d %c %d %c %d",&h2,&a2,&m2,&c2,&s2);


    int k,d,e,f,g;

    k = (dia2 - dia)*86400;
    d = (h2 - h)*3600;
    e = (m2 - m)*60;
    f = (s2 - s);

    g = k+d+e+f;

    int dia3,h3,m3,s3,i,j;

    dia3 = g/86400;
    j = g%86400;
    h3 = j/3600;
    i = j%3600;
    m3 = i/60;
    s3 = i%60;

    printf("%d dia(s)\n",dia3);
    printf("%d hora(s)\n",h3);
    printf("%d minuto(s)\n",m3);
    printf("%d segundo(s)\n",s3);



    return 0;

}
