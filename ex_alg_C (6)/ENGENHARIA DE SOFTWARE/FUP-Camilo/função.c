#include <stdio.h>
int main(void)
{
    int contador, num, res=0;
    printf("Digite um valor: ");
    scanf("%d", &num);
    for (contador = 2; contador <= num ; contador++)
    {
        if(num % contador == 0){
            res++;
        }
        if(res != 0 && num>1){
            printf("%d É PRIMO.", num);
        }
  
            
            }
}