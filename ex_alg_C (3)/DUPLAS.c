#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int num, a, b;
      printf("Digite um numero: ");
        scanf("%d", &num);
          a=num;
          printf("Duplas: ");
    while(num != 0){
        b=num/a;
         if(num%a==0 && b<=a){
             printf("(%d X %d)", a,b);
         }
         a--;
    }
}

