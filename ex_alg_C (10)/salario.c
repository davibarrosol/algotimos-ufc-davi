#include <stdio.h>
 
int main() {
 
    int nf, ht;
    double valor, salario;

    scanf("%d", &nf);
    scanf("%d", &ht);
    scanf("%lf", &valor);

    salario = valor*ht;
    
    printf("NUMBER = %d\n", nf);
    printf("SALARY = U$ %.2lf\n", salario);

 
    return 0;
}