#include <stdio.h>
#include <stdlib.h>

typedef struct {
		char titulo[40];
		char isbn[40];
		char autor[100];
		int ano;
		int npag;
	} livro;
void recebelivro(livro * p1){
	printf("TITULO: \n");
    fgets(p1->titulo, 40, stdin);
    printf("ISBN: \n");
    fgets(p1->isbn, 50, stdin);
    printf("AUTOR: \n");
    fgets(p1->autor, 20, stdin);
    printf("ANO DE PUBLICACAO: \n");
    scanf("%d", &p1->ano);
    fflush(stdin);
    printf("NUMERO DE PAGINAS: \n");
    scanf("%f", &p1->npag);
    fflush(stdin);
}
void imprimelivro(livro * p1){
    printf("DADOS DO LIVRO: \n%s\n%s\n%s\n%d\n%d", p1->titulo, p1->isbn, p1->autor, p1->ano, p1->npag);
}
int main (){
	livro p[10];
	int n;
	printf("DEFINA A QUANTIDADE DE LIVROS: ");
	scanf("%d", &n);
	if(n > 10){
		return 0;
	}
		for(int i = 0; i < n; i++){
		recebelivro(&p[i]);
		}
		for(int i = 0; i < n; i++){
		imprimelivro(&p[i]);
		}
 }
