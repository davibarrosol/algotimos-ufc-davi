#include <stdio.h>
 
int main() {
 
    double A,B,C;
    double tri, circ, trap, quad, ret;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    tri = (A*C)/2;
    circ = 3.14159*C*C;
    trap = (((A+B)*C)/2);
    quad = B*B;
    ret = A*B;
    
    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", circ);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", quad);
    printf("RETANGULO: %.3lf\n", ret);
 
    return 0;
}