#include <stdio.h>
#include <stdlib.h>
int main (){
    int i;
    printf("ENTRADA: ");
    int vetor[10];
    int array[10];
    for(i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < 10; i++){
        scanf("%d", &array[i]);
    }
    int resultado[10];
    printf("SAIDA: ");
    for(i = 0; i < 10; i++){
       resultado[i] = vetor[i]*array[i];
       printf("%d ", resultado[i]);
    }
    
}
