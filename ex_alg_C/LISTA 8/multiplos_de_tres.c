#include <stdio.h>
#include <stdlib.h>
int *primeirosMultiplosDeTres(int tamanho){
    int *vetor;
    vetor = (int*)malloc(tamanho *sizeof(int));
    vetor[0] = 0;
    for(int i = 1; i < tamanho; i++){
        vetor[i] = vetor[i-1] + 3;
    }
    return vetor;
}
int main (){
    int tamanho;

    scanf("%d", &tamanho);

    int *vetor = primeirosMultiplosDeTres(tamanho);

    for(int i = 0; i < tamanho; i++){
        printf("%d ", &vetor[i]);
    }
}