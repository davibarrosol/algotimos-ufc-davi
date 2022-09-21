#include <stdio.h>
 
int main() {
 
    char nome[101];
    fgets(nome, 101, stdin);

    double vendas, salariof, salario;
    scanf("%lf", &salariof);
    scanf("%lf", &vendas);
    
    salario = (salariof + (vendas*0.15));
    
    printf("TOTAL = R$ %.2lf\n", salario);

 
    return 0;
}