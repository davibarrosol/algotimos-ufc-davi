#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int parOuImpar(int numero){
    int resultado;
    if(numero % 2 == 0){
        printf("1");
    }else if (numero % 2 != 0){
        printf("0");
    }
    return (resultado);
}
int main (){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    int resultado = parOuImpar(n);
    
}