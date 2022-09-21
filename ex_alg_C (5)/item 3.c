#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
    int num;
    int maior=0;
    int menor=0;
    int flag = 0;

    printf("Digite a sequência: \n");
    while(num>0){
        scanf("%d", &num);
        if(flag == 0){
            maior = num;
            menor = num;
            flag = 1;
            if(num<0){
            printf("Valor Inválido.");
            return 0;
          }
        }
    
       if((num>0) && (num>maior)){
        maior = num;
       
       }if((num>0) && (num<menor)){
        menor = num;
    }
    }
      printf("O maior número é: %d\n\n", maior);
      printf("O menor número é: %d", menor);
     


}