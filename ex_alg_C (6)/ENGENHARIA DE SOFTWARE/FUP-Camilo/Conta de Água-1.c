#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    float consumo, numiden, valor, residencial, comercialp, indsutrial, typecons;
 
    printf("Os tipos de consumo são:\n");
    printf("Residencial-0\n");
    printf("Comercial-1\n");
    printf("Industrial-2\n");
    printf("Para indicar seu tipo de consumo digite o número que corresponde ao seu consumo.\n");
    printf("Digite o número de identificação, tipo de consumo e a quantidade de consumo em m³: ");
    scanf("%f %f %f",&numiden,&typecons,&consumo);
    
    if (typecons==0)
    {
       valor=(5)+(0.05*consumo);
       printf("Cliente número %.f o valor a ser pago é:R$ %.f",numiden,valor);
    }
    if (typecons==1)
    {
        valor=(500)+((consumo-80)*0.03);
        printf("Cliente número %.f o valor a ser pago é:R$ %.f",numiden,valor);
    }
    if(typecons==2)
    {
        valor=(800)+((consumo-100)*0.04);
        printf("Cliente número %.f o valor a ser pago é:R$ %.f",numiden,valor);
    }

    return 0;

}