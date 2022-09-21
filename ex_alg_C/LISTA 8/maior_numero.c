#include <stdio.h>
#include <stdlib.h>
void maiorValor(int *vetor, int tamanho, int **p_maior){
    **p_maior = 0;
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] > **p_maior){
            **p_maior = vetor[i];
         }
    }
}
int main (){
    
    int tamanho, maior = 0, *p_simples, **p_duplo;
     scanf("%d", &tamanho);

    int vetor[tamanho];
        for(int i = 0; i < tamanho; i++){
            scanf("%d", &vetor[i]);
         }

    p_simples = &maior;
    p_duplo = &p_simples;
    
    maiorValor(vetor, tamanho, p_duplo);
    printf("%d", **p_duplo);

}