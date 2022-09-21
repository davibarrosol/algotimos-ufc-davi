#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int main (){
	int jog, cont;
    srand(time(NULL));
    
    do{
        printf("Opções:\n\n0-SAIR\n1-PEDRA\n2-PAPEL\n3-TESOURA\n\nDigite o desejado: ");
        scanf("%d", &jog);
        int x = 1 + rand()%3;
        if(jog == 0){
            system("cls");
            printf("\nTchau!");
            break;
        }
        if((jog>3)||(jog<0)){
            printf("\nOpção Inválida.\n\nFim do Programa.\n\n----------------------");
            break;
        }
        
        switch(jog){
            case 1:
            if(x == 1){
            printf("Você jogou pedra e o computador jogou pedra");
            }else if (x == 2){
                printf("Você jogou pedra e o computador jogou papel");
            }else{
                printf("Você jogou pedra e o computador jogou tesoura");
            }
            break;
            
            case 2:
            if(x == 1){
            printf("\nVocê jogou papel e o computador jogou pedra");
            }else if (x == 2){
                printf("\nVocê jogou papel e o computador jogou papel");
            }else{
                printf("\nVocê jogou papel e o computador jogou tesoura");
            }
            break;

            case 3:
            if(x == 1){
                printf("\nVocê jogou tesoura e o computador jogou pedra");
            }else if (x == 2){
                printf("\nVocê jogou tesoura e o computador jogou papel");
            }else{
                printf("\nVocê jogou tesoura e o computador jogou tesoura");
            }
            break;
        }
        if ((jog == 2 && x == 1)||(jog == 3 && x == 2)||(jog ==1 && x==3)){
            printf("\n\nVocê ganhou!");
        }else if ((jog == 1 && x == 2) || (jog == 2 && x == 3) || (jog == 3 && x == 1)){
            printf("\n\nComputador ganhou!");
        }else if (jog == x){
            printf("\n\nEMPATE");
        }
        printf("\n\nDeseja continuar ?\n\n1-Sim\n2-Não\n\nResposta: ");
        scanf("%d", &cont);
        if(cont==1){
            system("cls");
        }
        if(cont==2){
            printf("\n\nFim de jogo");
        }
    }while (cont == 1);
    return 0;
}