#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int calculadora(int n1, int n2, char sinal)
{
    int resultado;
    if(sinal == '+')
    {  resultado = n1 + n2;
       return resultado;
    }if(sinal == '-'){
        resultado = n1 - n2;
        return resultado;
    }if(sinal == '*'){
        resultado = n1 * n2;
        return resultado;
    } if(sinal == '/'){
        resultado = n1 / n2;
        return resultado;
    }
}
int main(){
    int num1, num2;
    char sinal;
    printf("ESTE PROGRAMA CALCULA NÚMEROS:\n\nUSE + PARA SOMAR\n\nUSE - PARA SUBTRAIR\n\nUSE * PARA MULTIPLICAR\n\nUSE / PARA DIVIDIR");
    printf("\n\nDIGITE: ");
    scanf("%d %c %d", &num1, &sinal, &num2);
    printf("RESULTADO: %d", calculadora(num1, num2, sinal));

}