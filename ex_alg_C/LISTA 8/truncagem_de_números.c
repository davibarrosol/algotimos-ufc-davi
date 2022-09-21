#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void trunca (double *vetor1, int tamanho){
    int i;
    for(i = 0; i < tamanho; i++){
        vetor1[i] = trunc(vetor1[i]);
        printf("%.2lf ", vetor1[i]);
    }        
}

int main(){

    int tamanho;
    scanf("%d", &tamanho);

    double vetor1[tamanho];

    // &vetor1[0] -> vet
    // *vet+i

    for(int i = 0; i < tamanho; i++){
        scanf("%lf", &vetor1[i]);
    }

    trunca(vetor1, tamanho);

    // vetor -> *vetor[0]
    // vetor+1 -> *vetor[1]

   
}