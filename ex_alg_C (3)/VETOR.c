#include <stdio.h>
#include <stdlib.h>
int main (){
 
    int matriz [3][2]; //3 LINHAS 2 COLUNAS
    for (int i = 0; i<3; i++){
        for(int j= 0; j<2; j++){
         scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i<3; i++){
        for(int j= 0; j<2; j++){
         printf("%d  ", *(matriz+i*2)[j]);
}
    }
    printf("\n");
}