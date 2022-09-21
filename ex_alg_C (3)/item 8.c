#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
  int n1, n2, cursor;
  //entrada de dados
  printf("Digite os números: ");
  scanf("%d %d", &n1, &n2);
//condição inicial

  //repetição
  for(cursor=n1; cursor >= 1; cursor--)
  {
     if(n1 % cursor == 0 && n2 % cursor == 0){
       printf("MDC: %d", cursor);
       break;
     }
     
   
  }

}
