#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int num = 0;
int soma(int x){
     
    while(x != 0){
        int resultado = num + x;
        num = x;
        return resultado;
    }
    
}
int main (){
    
    int num;
    while (num != 0){
    printf("\nDigite um número: ");
    scanf("%d", &num);
    printf("\nSOMA: %d\n", soma(num));
    }
    
}