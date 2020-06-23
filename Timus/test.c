#include <stdio.h>
int main()
{
     double a,b,c,d;
     int i;

     i=1;
    while(i<=1000)
    {
    scanf("%lf",&b);
    if(b>=0.0 && b<=10.00)
     {
      a+=b;
      c+=1;
     }
    if(b<0 || b>10)
     {
      printf("nota invalida\n");
     }
    if(c==2)
     {
      printf("media = %.2lf\n",a/2);
      break;
     }

    i++;
    }

   return 0;
}
