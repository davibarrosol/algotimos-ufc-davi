#include <stdio.h>
#include <math.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL,"C");
    float altura;
    float peso;
    float imc;
    
    
    printf("\nDigite a altura: ");
    scanf("%f",&altura);
    printf("\nDigite o peso: ");
    scanf("%f",&peso);

    imc=(peso)/(pow(altura,2));
    printf("\nIMC: %.2f\n", imc);
    if(imc<16)
    {
        printf("\nCategoria: Baixo peso-Grau I");
    }
    if((imc>=16)&&(imc<=16.99))
    {
        printf("\nCategoria: Baixo peso-Grau II");
    }
    if((imc>=17)&&(imc<=18.49))
    {
        printf("\nCategoria: Baixo peso-Grau III");
    }
    if ((imc>=18)&&(imc<=24.99))
    {
        printf("\nCategoria: Peso Adequado");
    }
    if((imc>=25)&&(imc<=29.99))
    {
        printf("\nCategoria: Sobrepeso");
    }
    if((imc>=30)&&(imc<=34.99))
    {
        printf("\nCategoria: Obesidade I");
    }
    if((imc>=35)&&(imc<=39.99))
    {
        printf("\nCategoria: Obesidade II");
    }
    if((imc>=40))
    {
        printf("\nCategoria: Obesidade III");
    }
    return 0;
}