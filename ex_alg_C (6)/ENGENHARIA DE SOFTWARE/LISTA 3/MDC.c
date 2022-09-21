#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n1,n2,cursor;
    printf("Digite dois números: ");
    scanf("%d %d", &n1, &n2);
    for(cursor = n1; cursor >=1; cursor--){
        if(n1 % cursor == 0 && n2 % cursor == 0){
        printf("MDC: %d", cursor);
        break;
        }

    }
}