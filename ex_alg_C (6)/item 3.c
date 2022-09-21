#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int mdc(int n1,int n2){
    int i;
    for(i=n1; i>=1; i--){
        if(n1 % i == 0 && n2 % i == 0){
            return i;
        }
    }
}
int main(){
    int num1, num2;

    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);

    printf("MDC: %d", mdc(num1,num2));

}