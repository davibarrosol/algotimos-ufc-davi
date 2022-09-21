#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(void){
    int chute;
    int i=0;
    srand(time(NULL));
    int valor = rand()%100;
  
    printf("O computador sorteou um número de 0 a 100!\n\n");
    while(chute != valor) {
          
        printf("Digite um valor: ");
        scanf("%d", &chute); 
    
        if(chute > valor){
            printf("Errado, o número é menor!\n\n");
            
        }else if(chute < valor){
            printf("Errado, o número é maior!\n\n");
       
        }else if(chute == valor){
            printf("Acertou em cheio!");
           
        }i++;
    }
        if(i>=1 && i<=3){
            printf("\nMuita Sorte!");
        }else if(i>=4 && i<=6){
            printf("\nSorte!");
        }else if(i>=7 && i<=10){
            printf("\nNormal!");
        }else if(i>=11){
            printf("\nAzarado!");}
    }
