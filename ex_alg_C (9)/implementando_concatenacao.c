#include <stdio.h>
void concatena(char origem[], char destino[]){
    int i = 0;
    int j = 0;
    while(origem[i] != '\0'){
        i++;
    }
   while((origem[i++] = destino[j++]) != '\0');
}
int main()
{
    char origem[101];
    char destino[40];

    fgets(origem, 101, stdin);
    fgets(destino, 40, stdin);
    concatena(origem,destino);

    printf("%s", origem);
}
