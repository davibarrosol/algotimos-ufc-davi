#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int L,C;
    
    scanf("%d %d", L, C);

    int **matriz = (int**)malloc(L*sizeof(int*));
    for (int i =0 ; i < L; i++) matriz[i] = (int*)malloc(C*sizeof(int));

    srand(time(NULL));
    for(int i  = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            matriz[i][j] = rand() % 1 + 100;
        }
    }
    for(int i  = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            printf("%d", matriz[i][j]);
        }
    }
}