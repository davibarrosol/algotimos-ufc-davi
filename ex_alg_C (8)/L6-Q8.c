#include <stdio.h>
#include <stdlib.h>
int main (){
    int i,j;
    int matrizM[3][3];
    //ENTRADA DE DADOS
      for(i=0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &matrizM[i][j]);  
        }
    }
    //VERIFICA A SOMA DAS LINHAS, COLUNAS.
    int somaL=0;
    int somaC=0;
    int flag=0;
      for(i=0; i < 3; i++){
        for(j = 0; j < 3; j++){
            somaL += matrizM[i][j];
        }
    }
     for(i=0; i < 3; i++){
        for(j = 0; j < 3; j++){
            somaC += matrizM[j][i];
        }
    }
     for(i=0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(somaL != somaC){
                 flag = 1;
            }
        }
     }
     if(flag == 0){
         printf("QM");
     }else{printf("NQM");}
   
}