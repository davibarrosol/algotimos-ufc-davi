#include <stdio.h>
#include <stdlib.h>
int main (){
  int i, tam1, tam2;
  printf("ENTRADA: ");
  //preenche vetor1
  scanf("%d", &tam1);
  int vetor[20];
  for(i = 0; i < tam1; i++){
      scanf("%d", &vetor[i]);
  }

  int vetor2[20];
  int recebe[20];
  int indiceR = -1;
  scanf("%d", &tam2);
//preenche vetor 2
for(i = 0; i < tam2; i++){
      scanf("%d", &vetor2[i]);
      }
//varre elementos do vetor 1
for(int indiceA=0; indiceA < tam1; indiceA++){
    //varre elementos do vetor 2
      for(int indiceB=0; indiceB < tam2; indiceB++){
          //checa se elementos do vetor 1 são iguais ao do vetor 2
          if(vetor[indiceA] == vetor2 [indiceB]){
              int valorDup=0;
              //checa repetição
              for(int k = 0; k <= indiceR; k++){
                  //se ja existe, não faz nada!
                  if(vetor2[indiceB] == recebe[k]){
                     valorDup = 1;
                  //caso contrário
                  break;
                  } 
              }
               if(!valorDup){
                      indiceR++;
                      recebe[indiceR] = vetor[indiceA];
                  }
          }
      }
}

printf("SAIDA: ");
for(int i = 0; i <= indiceR; i++)
{
   printf("%d ", recebe[i]);
}

  
}