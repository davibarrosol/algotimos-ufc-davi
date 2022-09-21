#include <stdio.h>      
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
  

int main (){
    int i, valor;
    
    printf("SURPRESINHA: \n\n");
    

   srand(time(NULL));

    for (i=0; i<6; i++)
    {
        printf("%d " , rand() % 60+1);
    }


getch();
return 0;
}
