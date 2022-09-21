#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "C");

  float a,b,c,x1,x2,delta;

  printf("Digite os valores de a,b e c: ");
  scanf("%f %f %f" ,&a,&b,&c);

  delta=(pow(b,2))-(4*a*c);
  x1=((-b)+sqrt(delta))/2*a;
  x2=((-b)-sqrt(delta))/2*a;

  if(a==0)
  {
    printf("valor de A é zero, não é uma equação do segundo grau.");
  }
  else if(delta<0)
  {
      printf("Delta negativo, não há raízes.");
  }
  if ((delta>0) && (a!=0))
  {
     printf("As raízes são x1 = %.2f e x2= %.2f",x1, x2);
  }
  if (delta==0)
  {
      x1=(-b)/(2*a);
      x2=(-b)/(2*a);
      printf("As raízes são x1 = %.2f e x2= %.2f",x1,x2);
  }

return 0;
}