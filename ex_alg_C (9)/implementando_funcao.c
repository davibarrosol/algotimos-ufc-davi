#include <stdio.h>
int tamanho(char s[]){
   int contador = 0;
   while(s[contador] != '\0'){
    contador++;
   }
   printf("%d", contador);
}
int main() 
{
    int n;
    scanf("%d", &n);
    char palavra[n];
    
    scanf("%[^\n]", palavra);
    tamanho(palavra);
}


void copia(char origem[], char destino[]){
   int i = 0;
  while(origem[i] != '\0')
  { 
    destino[i] = origem[i];
     i++;
  }
  destino[i] = '\0';
}
int main(){
  
    char origem[101];
    char destino[101];

    fgets(origem, 101, stdin);

    copia(origem, destino);
    printf("%s", destino);

        
}