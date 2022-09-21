#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// n = (n-1) + (n+2)


int fib(int n) //função c/ função como parametro = função de alta ordem!!
{
   return (n == 1 || n==2 ? 1 : fib(n-1) + fib(n-2));
}
int main (){
    int pos;
        printf("Digite a posição N: ");
        scanf("%d", &pos);
    
        printf("Fibonacci: %d", fib(pos));
         }


