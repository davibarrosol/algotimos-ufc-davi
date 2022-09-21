#include <stdio.h>
#include <stdlib.h>
int main (){
    int i, j;
    int matrizM[3][3];
    int flag=0;
    for(i=0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &matrizM[i][j]);  
        }
    }
     for(i=0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(matrizM[i][j] != matrizM[j][i]){
              flag = 1;
            }
        } 
    }
     if(flag == 0){
            printf("SIMETRICA");
        }else{printf("N SIMÉTRICA");}

}