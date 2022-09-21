#include <stdio.h>

float somatorio (float num)
{
 static float total = 0;
 total += num;
return total;
}
int main (){
    while(1){
        float num;
        scanf("%f", &num);
        printf("%.2f\n", somatorio(num));
    }
}