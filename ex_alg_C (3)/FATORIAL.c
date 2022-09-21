#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fatorial(int n){
    if(n<0){
        return -1;
    }
   if(n == 1 || n == 0){
       return 1;
   }
   if (n > 1){
        return n*fatorial(n-1);
}
}
int main (void){
    int num;
    printf("Digite o número: ");
    scanf("%d", &num);
    printf("%d", fatorial(num));
}