#include <stdio.h>
 
int main() {
    int cod1, n1, cod2, n2;
    double valor1, valor2, total;
    
    scanf("%d", &cod1);
    scanf("%d", &n1);
    scanf("%lf", &valor1);
    scanf("%d", &cod2);
    scanf("%d", &n2);
    scanf("%lf", &valor2);
    
    total = ((valor1*n1)+(valor2*n2));
    
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    
    return 0;
}