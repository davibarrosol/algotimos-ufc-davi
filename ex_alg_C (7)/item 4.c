#include <stdio.h>
#include <stdlib.h>
int main (){
    int i;
    printf("Entrada: ");
    scanf("%d", &i);
    int v[i];
    int n;
    int codigo;
    if(i>20){
        printf("Valor impossivel");
        return 0;
    }
    for(n=0; n<i; n++){
        scanf("%d", &v[n]);
    }
     
    scanf("%d", &codigo);
 printf("Saida: ");
    if(codigo == 1){
        for(n=0; n<i; n++){
        printf("%d ", v[n]);
        
        }
    }else{
        for(n=i-1; n>=0; n--){
         printf( "%d ", v[n] );
        
        }
    }
}