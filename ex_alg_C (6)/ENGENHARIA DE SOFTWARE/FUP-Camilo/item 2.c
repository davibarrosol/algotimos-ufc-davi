#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a, count, soma;
    soma=0;
    count=200;
    for (a =  0 ; a<count; a++){
        if (a % 3 == 0 && a % 7 != 0){
            soma +=a;
            
        }
    }
printf("\n%d\n", soma);
}