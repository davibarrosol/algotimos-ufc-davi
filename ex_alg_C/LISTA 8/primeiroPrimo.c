#include <stdlib.h>
#include <stdio.h>
int *primeiroPrimo(int *vetor, int tamanho)
{
    int i;
   
    for(i = 0; i < tamanho; i++){

        int cont = 0;

            for(int j = 1; j <= vetor[i]; j++){
                if(vetor[i] % j == 0){
                    cont++;
                }
            }
            if(cont == 2){   
                return vetor[i];
                break;
            }
    }
    
    }

int main (){
    int tamanho;
     scanf("%d", &tamanho);
    int vetor[tamanho];
        for(int i = 0; i < tamanho; i++){
            scanf("%d", &vetor[i]);
        }

    printf("%d", primeiroPrimo(vetor, tamanho));
    
}