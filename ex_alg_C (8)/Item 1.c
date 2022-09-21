#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void bonito(int m[4][6]){
    for(int j=0; j < 4; j++){
        for(int i=0; i < 6; i++){
        printf("%3d", m[j][i]);   
    }
    printf("\n");
    }
}
int main (){
    int i;
    int matriz[4][6];
    srand(time(NULL));
    for(i=0; i < 4; i++){
      for(int k=0; k < 6; k++){
          matriz[i][k] = rand()%60 + 1;
      }
    }
    bonito(matriz);
}