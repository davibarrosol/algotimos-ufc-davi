#include <stdio.h>
#include <stdlib.h>
void menorMaior(int tam, int *vetor, int *menor, int *maior){  
     *maior = 0;
     *menor = vetor[0];
    for(int i = 0; i < tam; i++){
        if(vetor[i] > *maior){
            *maior = vetor[i];
        }
        if(vetor[i] < *menor){
            *menor = vetor[i];
        }
    } 
}
int main(){
     int maior;
    int menor;
    int tamanho;
    scanf("%d", &tamanho);
    int vetor[tamanho];
      for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }

    menorMaior(tamanho, vetor, &menor, &maior);
    printf("Maior: %d  Menor: %d", maior, menor);
}