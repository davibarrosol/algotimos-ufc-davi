#include <stdio.h>
#include <stdlib.h>
int main (){
    int i, j;
    int matrizM[3][3];
    int flag=0;
    //ENTRADA DE DADOS.
    for(i=0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &matrizM[i][j]);  
        }
    }
    //VERIFICA SE SÃO SIMÉTRICA.
    //SIMÉTRICA M[I][J] == M[J][I].
     for(i=0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(matrizM[i][j] != matrizM[j][i]){
              flag = 1;
            }
        } 
    }
    //SE A FLAG FOR VERDADEIRA É SIME, CASO NÃO, N SIME.
     if(flag == 0){
            printf("SIMETRICA");
        }else{printf("N SIMÉTRICA");}

}