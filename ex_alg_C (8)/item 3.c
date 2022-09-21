#include <stdio.h>
#include <stdlib.h>
int main (){
    int i, j;
    int matriz[4][3];
    int soma[4];
    int quantEle = 0;
    int somaDosEle = 0;
    srand(time(NULL));
    
    for(i = 0; i < 4; i++){
        soma [i] = 0;
        for(j = 0; j < 3; j++){
            matriz[i][j] = rand() % 60 + 1;
              if(matriz[i][j] >= 15 && matriz[i][j] <= 20){
                 soma[i]++;
               }
               printf("%3d", matriz[i][j]);  
        }
      printf ("\n");
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++){
            if(matriz[i][j] % 2 == 0){
                  somaDosEle += matriz[i][j];
                  quantEle++;
                 }
        }
         printf("Linha %d: %d\n", i+1, soma[i]);
    }
    printf("Media dos Pares: %d", somaDosEle / quantEle);



 }
 
     
    
   