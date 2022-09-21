#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fib(int x){
    int a=0, b=1, c=1, i=0;

    for(i=2; i<=x; i++){
        c = a + b;
        a = b;
        b = c;
    } return (c);
}
int main (){
    int posicao;
    printf("Digite a posição: ");
    scanf("%d", &posicao);
    int resultado = fib(posicao);
    printf("Fibonacci: %d", resultado);
    }