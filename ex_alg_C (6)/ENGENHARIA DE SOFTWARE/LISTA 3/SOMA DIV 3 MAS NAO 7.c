#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (void){
    int num, soma=0;
    for(num=0; num<=200; num++){
        
         if(num % 3 == 0 && num % 7 != 0){
             soma+=num;}
    }
    printf("Soma= %d", soma);
}
    