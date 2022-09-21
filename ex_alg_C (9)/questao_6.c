#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main (){

    char frase[101];

    scanf("%[^\n]", frase);

    int tam = strlen(frase);
    
    for(int i = 0; i < tam; i++){
        if(isalpha(frase[i])){
            if(i == 0){
                frase[i] = toupper(frase[i]);
            }else if (frase[i-1] == ' '){
                frase[i] = toupper(frase[i]);
            }else{
                frase[i] = tolower(frase[i]);
            }
                   
        }
    }
   
    printf("%s", frase);


}