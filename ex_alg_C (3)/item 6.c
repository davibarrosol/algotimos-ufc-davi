#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, a=0, b;
    printf("Digite N: ");
    scanf("%d",&n);
  
    for(i=1; i<=n; i++){
        b=(a*2)+1;
        a=b;
          printf("%d ,",b);
       
      }
}
