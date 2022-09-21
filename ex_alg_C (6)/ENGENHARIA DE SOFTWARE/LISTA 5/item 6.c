#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int i;
    int n;
    int cont = 0;
    printf("Entrada: ");
    scanf("%d", &n);
      if(n>50){
        n=50;
              }
    float v[n];
       for (i = 0; i<n; i++){
        scanf("%f", &v[i]);
           if(v[i] >= 7){
           cont++;
                        }
                           }

    printf("Saída: %d ", cont);
}