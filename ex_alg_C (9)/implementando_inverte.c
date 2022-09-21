#include <stdio.h>
void inverte(char origem[], char  destino[]){
    int tamanho = 0;
    while(origem[tamanho] != '\0'){
        tamanho++;
    } 
    int j = tamanho-1;
    int k = 0;
    while(j >= 0){
        destino[k] = origem[j];
        j--;
        k++;
    }

    destino[k] = '\0';
}
int main (){
    char origem[101];
    char destino[101];

    fgets(origem, 101, stdin);

    inverte(origem, destino);
    printf("%s", destino);
}