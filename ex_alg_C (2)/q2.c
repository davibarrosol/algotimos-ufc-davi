#include <stdio.h>
#include <stdlib.h>
	float *divideVetores(int * a, int * b, int tamanho)
	{
		float *valor = (float*) malloc (tamanho * sizeof(float));
		valor[tamanho];
		for(int i = 0; i < tamanho; i++){
			valor[i] = ((float)a[i])/(float)(b[i]);
		}
		return valor;
	}
	int main (){
		int t;
		scanf("%d", &t);
		
		int a[t];
		for (int i = 0; i < t; i++){
			scanf("%d", &a[i]);
		}
		
		int b[t];
		for (int i = 0; i < t; i++){
			scanf("%d", &b[i]);
		}
		printf("DIVISÃO: %.2f ", *divideVetores(a, b, t) );
	}
	
		
		
