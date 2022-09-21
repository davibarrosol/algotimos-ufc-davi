#include <stdio.h>
int main(){
int n, i, j;
scanf("%d", &n);
int vetor[3][4];
for(i=0; i < 3; i++){
    for(j=0; j < 4; j++){
       scanf("%d", &vetor[i][j]);
    }
}
for(i=0; i < 3; i++){
    for(j=0; j < 4; i++){
       printf("%3d ", vetor[i][j]);
    }
    printf("\n");
}
}