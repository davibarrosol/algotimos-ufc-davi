#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int mdc(int n1,int n2){
        int x;
        
        if(n2 == 0)
        {
            return n1;
        }else if (n2>0){
            return mdc(n2, n1%n2);
        }
    
    
}
int main()
{
    int num1, num2;

    printf("Digite dois números: ");
       scanf("%d %d", &num1, &num2);

         printf("MDC: %d", mdc(num1,num2));

}