#include <stdio.h>
#include <math.h>
int main()
{
    int num, x, y;
    printf("Digite um número: ");
    scanf("%d",&num);
    x=num;
    
    while(num!=0)
    {
       y=num/x;
       if(num%x==0 && y<=x){
        printf("(%d x %d)",y,x);
    }
    x--;


    }
}