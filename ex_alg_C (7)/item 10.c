#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    printf("ENTRADA: ");
    int vetor[20];
    for(i = 0; i < 20; i++){
        scanf("%d", &vetor[i]);
    }
    int contI = 0;
    while(contI < 10){
    int auxiliar;
    auxiliar = vetor[contI];
    vetor[contI] = vetor[19-contI];
    vetor[19-contI] = auxiliar;
    contI++;
    }
    printf("SAIDA: ");
    
    
}