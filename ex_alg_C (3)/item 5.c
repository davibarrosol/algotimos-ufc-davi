#include <stdio.h>
#include <math.h>
int main()
{
  int num, i, quant=0, soma=0, media=0;
  for(i=0; i<=num; i++){
      printf("Digite um número: ");
      scanf("%d", &num);
      if(num>0){
      quant++;
      soma=soma+num;
      media=(soma)/(quant);}
      if(num<0){
          printf("\nSoma: %d\n", soma);
          printf("\nMédia: %d\n", media);
          printf("\nQuantidade: %d\n", quant);
      }
      
    
      
      
  }
}