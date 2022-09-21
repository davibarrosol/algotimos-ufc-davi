#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main()
    {
      
       int a, b, fb, i, c;
       a=0;
       b=1;
       printf("Digite uma posição: ");
       scanf("%d",&c);
       if(c==1){
         printf("\nSequência de Fibonacci: 1\n\n");
         if (c==2){
           printf("\nSequência de Fibonnacci: 1\n\n");
         }
       }
       for(i=2; i<=c; i++)
       {
         fb = a + b;
         a = b;
         b = fb;
       
       if(i==c){
      printf("\nSequência de Fibonacci: %d\n\n",b);
       }
       }
    }
    
       

       
       
     
    
        
        
        

    