#include <stdio.h>
#include <stdlib.h>
int *maiorValor(int *a, int *b){
   if(*a > *b){
    return a;
   }
   else
   {
   return b;}
}
int main(){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
        printf("PONTEIRO DE MAIOR VALOR: %d", maiorValor(&a,&b));
        printf("\nPONTEIRO A:%d", &a);
        printf("\nPONTEIRO B:%d", &b);
}