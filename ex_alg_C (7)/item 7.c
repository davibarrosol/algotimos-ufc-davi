#include <stdio.h>
#include <stdlib.h>
int main (){
    int i;
    int n;
    int x;
   printf("Entrada: ");
   scanf("%d", &n);
   int v[n];
   int copia[n];
  
   for(i=0; i<n; i++){
       scanf("%d", &v[i]);
       
 }
 scanf("%d", &x);
 printf("Saida: ");
 for (i=0; i<n; i++){
     copia[i]=(v[i])*x;
     printf("%d ", copia[i]);

}
}