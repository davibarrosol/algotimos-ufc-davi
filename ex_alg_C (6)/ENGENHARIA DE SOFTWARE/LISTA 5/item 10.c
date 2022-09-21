#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    printf("ENTRADA: ");
    int vetor[20];
    for(i = 0; i < 20; i++){
        scanf("%d", &vetor[i]);
    }
    printf("SAIDA: ");
    for(i = 20-1; i>=0; i--){
        printf("%d ", vetor[i]);
    }


}