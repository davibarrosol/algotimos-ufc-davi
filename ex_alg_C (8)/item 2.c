#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int i, j;
    int matriz[3][5];
    srand(time(NULL));
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            matriz[i][j] = rand() % 60 + 1;
        }
    }
     for( i=0; i < 3; i++){
        for( j=0; j < 5 ; j++){
        printf("%3d", matriz[i][j]);   
    }
    printf("\n");
    }
    printf("\nElementos: ");
    int soma=0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            if(matriz[i][j] >= 15 && matriz[i][j] <=20){
                soma++;
                printf("%d ", matriz[i][j]);
            }
            
        }
    }
    printf("\nQuantidade de Elementos: %d", soma);
}
