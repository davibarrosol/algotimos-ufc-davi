#include <stdio.h>
 
int main() {
 
   double valor;
   scanf("%lf", &valor);
   
   int n100, n50, n20, n10, n5, n2;
   int m1, m050, m025, m010, m005, m001;
   
   n100 = valor/100;
   valor = valor - (n100*100);
   n50 = valor/50;
   valor = valor - (n50*50);
   n20 = valor/20;
   valor = valor - (n20*20);
   n10 = valor/10;
   valor = valor - (n10*10);
   n5 = valor/5;
   valor = valor - (n5*5);
   n2 = valor/2;
   valor = valor - (n2*2);
   m1 = valor/1;
   valor = valor - (m1*1);
   printf("%lf", valor);
   m050 = valor*0.50;
   valor = m050;
    m025 = valor*0.25;
   valor = m025;
    m010 = valor*0.10;
   valor = m010;
    m005 = valor*0.05;
   valor = m005;
    m001 = valor*0.01;
   valor = m001;
   
   printf("NOTAS:\n");
   printf("%d nota(s) de R$ 100,00\n", n100);
   printf("%d nota(s) de R$ 50,00\n", n50);
   printf("%d nota(s) de R$ 20,00\n", n20);
   printf("%d nota(s) de R$ 10,00\n", n10);
   printf("%d nota(s) de R$ 5,00\n", n5);
   printf("%d nota(s) de R$ 2,00\n", n2);
   
   printf("MOEDAS:\n");
   printf("%d moeda(s) de R$ 1.00\n", m1);
   printf("%d moeda(s) de R$ 0.50\n", m050);
   printf("%d moeda(s) de R$ 0.25\n", m025);
   printf("%d moeda(s) de R$ 0.10\n", m010);
   printf("%d moeda(s) de R$ 0.05\n", m005);
   printf("%d moeda(s) de R$ 0.01\n", m001);
 
   
    return 0;
}