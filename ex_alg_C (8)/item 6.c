#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    int i, j;
    float notas[10][4];
    for(i = 0; i < 10; i++){
      for(j = 0; j < 4; j++){
           scanf("%f", &notas[i][j]);
      }
    }
    int mat[10];
    for(i=0; i < 10; i++){
        scanf("%d", &mat[i]);
    }
     float soma=0;
     float media=0;
     float mediaC=0;
    for(i=0; i < 10; i++){
        for(j=0; j < 4; j++){
        soma += notas[i][j];
        media = (soma)/(4);
       }
    soma = 0;
     if (media > 7){
                printf("Aluno = %d| Media = %.2f| Aprovado!\n", mat[i], media);
     }else if (media == 7){
                printf("Aluno = %d| Media = %.2f| Aprovado por Média!\n", mat[i], media);
    }else if(media < 7){
               printf("Aluno = %d| Media = %.2f| Recuperção Final!\n", mat[i], media);
      
         }
    }

   float soma1=0;

   for(i = 0; i < 4; i++){
       soma1 =  0;
        for(j = 0; j < 10; j++){
             soma1 += notas[j][i];
        }
        printf("Media prova %d: %.2f\n",i+1, soma1/10);
   }
   
     
    }

    
   

    

