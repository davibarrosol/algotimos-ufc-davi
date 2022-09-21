#include <stdio.h>
int main(){
    printf("Entrada: ");
     char entrada[101];
     fgets(entrada, 101, stdin);
    
     char caractere;
     printf("Caractere: ");
     scanf("%c", &caractere);

   

     int i;
     for(i = 0; entrada[i] != '\0'; i++){
        if(entrada[i] == caractere){
            printf("%d ", i+1);
        }
    }
}