#include <stdio.h>
#include <math.h>
int main()
{   int valor;
 printf("Valor: ");
 scanf("%d", &valor);
 printf("Notas: ");
 while(valor>0){
  if((valor)-200 >= 0){
    printf("200, ");
    valor-=200;
  }else if ((valor)-100 >= 0){
    printf("100, ");
    valor-=100;
  }else if ((valor)-50 >= 0){
    printf("50, ");
    valor-=50;
  }else if ((valor)-20 >= 0){
    printf("20, ");
    valor-=20;
   }else if ((valor)-10 >= 0){
    printf("10, ");
    valor-=10;
    }else if ((valor)-5 >= 0){
    printf("5, ");
    valor-=5;
    }else if ((valor)-2 >= 0){
    printf("2, ");
    valor-=2;
    }else if ((valor)-1 >= 0){
    printf("1, ");
    valor-=1;}
   
  }
}

  
  

