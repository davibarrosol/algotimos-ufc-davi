#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int N;
    scanf("%d", &N);

    int *vetor;

    vetor = (int*)malloc(N *sizeof(int));

    srand(time(NULL));

    for(int i = 0; i < N; i++){
        vetor[i] = rand () % 100;
    }

    for(int i = 0; i < N; i++){
        printf("%d ", vetor[i]);
    }
   
    

}