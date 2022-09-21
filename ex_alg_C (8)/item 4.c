#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main (){
    int i,j;
    int x,y,m,n;
    int matriz[6][3];
    int maior = 0;
    int menor = matriz[0][0];    
    srand(time(NULL));
    for(i = 0; i < 6; i++){
        for(j = 0; j < 3; j++){
            matriz[i][j] = rand () % 20 + 1;
             printf("%3d", matriz[i][j]);   
            }
            printf("\n");
    }
     for(i = 0; i < 6; i++){
        for(j = 0; j < 3; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
                x = i+1;
                y = j+1;

            }
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
                m = i+1;
                n = j+1;
            }
        }
     }
    printf("O maior elemento é: %d (%d,%d)", maior,x,y);
    printf("\nO menor elemento é: %d (%d,%d)", menor,m,n);
}