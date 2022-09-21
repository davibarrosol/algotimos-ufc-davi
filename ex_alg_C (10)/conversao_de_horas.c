#include <stdio.h>
 
int main() {
    int N, h, m, s, resto;
    scanf("%d", &N);
    h = N/3600;
    resto = N % 3600;
    m = resto / 60;
    s = resto % 60;
   printf("%d:%d:%d\n", h,m,s);
 
    return 0;
}