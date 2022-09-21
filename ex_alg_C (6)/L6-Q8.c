#include <stdio.h>
#include <stdlib.h>
int main (){
    int i,j;
    int matrizM[3][3];
      for(i=0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &matrizM[i][j]);
        }
    }
    int somaL[3];
    int somaC[3];
    int somaDP = 0;
    int somaDSC = 0;
    int flag = 0;
    //soma diagonal principal
    for(i=0; i < 3; i++){
         somaDP += matrizM[i][i];
        }
    
    //soma diagonal secundária
    for(i=0; i < 3; i++){
       somaDSC += matrizM[i][3-i-1];
    }
    //soma colunas
     for(j=0; j < 3; j++){
         somaC[j]=0;
        for(i = 0; i < 3; i++){
           somaC[j] += matrizM[i][j];
        }
     }
      //soma linhas
     for(i=0; i < 3; i++){
         somaL[i]=0;
        for(j = 0; j < 3; j++){
           somaL[i] += matrizM[i][j];
        }
     }
     //verifica a validade
     for(i=0; i < 2; i++){
           if(somaC[i] != somaL[i] || somaC[i] != somaC[i+1] || somaL[i] != somaL[i+1]){
              flag = 1;
           }
        
     }
         
    
     if(flag == 0 && somaDP == somaDSC){
         printf("Quadrado Mágico!");
     }else{printf("Não é Quadrado Mágico!");}
   
}