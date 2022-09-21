#include <stdio.h>
#include <stdlib.h>
int main(){
    float v[20];
    int i;
    printf("Entrada: ");
    for(i=0; i<20; i++){
        scanf("%f", &v[i]);
    }
    int maior = v[0];
    for(i=0; i<20; i++){
    if(v[i]>maior){
        maior = v[i];
    }
    
    
    }
   
   for(i=0; i<20; i++){
    v[i]= v[i] / maior;
    printf("%.3f ", v[i]);
    }


 
}