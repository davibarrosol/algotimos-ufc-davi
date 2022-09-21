#include <stdio.h>
#include <stdlib.h>
int main (){
 int i, n, j;
 scanf("%d", &n);
 int pascal[n][n];
 for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
        if(j == i || j == 0){
            pascal[i][j] = 1;
        }else{
            pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
        }
    }       
}
for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
        if(j <= i){
        printf("%3d ", pascal[i][j]);
        }
    }
    printf("\n");
}
}