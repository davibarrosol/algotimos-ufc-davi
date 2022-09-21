#include <stdio.h>
#include <math.h>
int main(){
int fb, a=0, b=1, i, n;
//entrada
printf("Digite N: ");
scanf("%d", &n);
//condições eliminatórias
if(n==1){
printf("Fibonacci: 1");
}
//repetição
for(i=2; i<=n; i++)
{
    fb=a+b;
    a=b;
    b=fb;

    if(i==n){
    printf("Fibonacci: %d", b);
    }
  
}
}
