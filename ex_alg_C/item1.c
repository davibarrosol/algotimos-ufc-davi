#include <stdio.h>
#include <stdlib.h>

  typedef struct antendimentoMedico
    {
        char nome[50];
        char endereco[50];
        char telefone[20];
        float altura;
        char dataNascimento[15];
        float massa;
    } med;
void funmed (med * pesq) {
   printf("NOME DO PACIENTE: \n");
    fgets(pesq->nome, 50, stdin);
    printf("ENDEREÇO DO PACIENTE: \n");
    fgets(pesq->endereco, 50, stdin);
    printf("TELEFONE DO PACIENTE: \n");
    fgets(pesq->telefone, 20, stdin);
    printf("ALTURA DO PACIENTE: \n");
    scanf("%f", &pesq->altura);
    fflush(stdin);
    printf("DATA DE NASCIMENTO DO PACIENTE: \n"); 
    fgets(pesq->dataNascimento, 15, stdin);
    printf("MASSA DO PACIENTE: \n");
    scanf("%f", &pesq->massa);
    fflush(stdin);
}
  
void mostraNome(med * pesq){
    printf("PACIENTE 1: %s\n %s\n %d\n %f\n %s\n %f\n", pesq->nome, pesq->endereco, pesq->telefone, pesq->altura, pesq->dataNascimento, pesq->massa);
}
int main(){
  int t = 2;
  med nome[t];
  for(int i = 0 ; i < t; i++ ){
    funmed(&nome[i]);
  }
  for(int i = 0 ; i < t; i++ ){
    mostraNome(&nome[i]);
  }


}
