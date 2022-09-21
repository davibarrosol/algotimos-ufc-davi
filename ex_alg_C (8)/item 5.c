#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int i,j;
    int matrizA[4][2];
    srand(time(NULL));
    for(i=0; i < 4; i++){
        for(j=0; j < 2; j++){
            matrizA[i][j] = rand () % 70;
            printf("%3d", matrizA[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int matrizB[2][3];
    srand(time(NULL));
    for(i=0; i < 2; i++){
        for(j=0; j < 3; j++){
            matrizB[i][j] = rand () % 70;
            printf("%3d", matrizB[i][j]);
        
        }
        printf("\n");
    }
    printf("\n");
int matrizC[4][3];
int cont = 0;
    for(i = 0; i < 4; i++){
        int atualA1 = matrizA[i][0];
        int atualA2 = matrizA[i][1];
        for(j = 0; j < 3; j++){
            int atualB1 = matrizB[0][j];
            int atualB2 = matrizB[1][j];
            matrizC[i][cont++]= (atualA1*atualB1) + (atualB2*atualA2);
            cont%=3;
        }
         
    }   
    for(i=0; i < 4; i++){
        for(j=0; j < 3; j++){
             printf(" %3d ", matrizC[i][j]);
        }
        printf("\n");
    }
}
