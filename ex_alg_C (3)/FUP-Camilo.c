#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (void)
{
    setlocale(LC_ALL, "C");

 int ano;


   printf("Digite o ano: ");
   scanf("%d", &ano);
   
   if ((ano%4==0) && (ano%100!=0)|| ano%400==0)
   {
     printf("O ano é bissexto");
   }
  else
   {
     printf("o ano não é bissexto");
   }

  

    


    




   
   return 0;
    
    
 }



