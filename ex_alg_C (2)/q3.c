#include <stdio.h>
#include <stdlib.h>

typedef struct {
		char titulo[40];
		char isbn[40];
		char autor[100];
		int ano;
		int npag;
	} livro;
int main(){
	livro p1;
	livro p2;
	livro p3;
	p1.npag = 0;
	p2.npag = 0;
	p3.npag = 0;
	printf("TITULO: \n");
    fgets(p1.titulo, 40, stdin);
    printf("ISBN: \n");
    fgets(p1.isbn, 50, stdin);
    printf("AUTOR: \n");
    fgets(p1.autor, 20, stdin);
    printf("ANO DE PUBLICACAO: \n");
    scanf("%d", &p1.ano);
    fflush(stdin);
    printf("NUMERO DE PAGINAS: \n");
    scanf("%f", &p1.npag);
    fflush(stdin);
    
    printf("TITULO: \n");
    fgets(p2.titulo, 40, stdin);
    printf("ISBN: \n");
    fgets(p2.isbn, 50, stdin);
    printf("AUTOR: \n");
    fgets(p2.autor, 20, stdin);
    printf("ANO DE PUBLICACAO: \n");
    scanf("%d", &p2.ano);
    fflush(stdin);
    printf("NUMERO DE PAGINAS: \n");
    scanf("%f", &p2.npag);
    fflush(stdin);
    
    printf("TITULO: \n");
    fgets(p3.titulo, 40, stdin);
    printf("ISBN: \n");
    fgets(p3.isbn, 50, stdin);
    printf("AUTOR: \n");
    fgets(p3.autor, 20, stdin);
    printf("ANO DE PUBLICACAO: \n");
    scanf("%d", &p3.ano);
    fflush(stdin);
    printf("NUMERO DE PAGINAS: \n");
    scanf("%f", &p3.npag);
    fflush(stdin);
    

    if(p1.npag > p2.npag && p1.npag > p3.npag){
	printf("DADOS DO LIVRO DE MAIOR PAGINA:  %s %s  %s  %d ", p1.titulo, p1.isbn, p1.autor, p1.ano);
}
    if(p2.npag > p1.npag && p2.npag > p3.npag){
	printf("DADOS DO LIVRO DE MAIOR PAGINA:  %s %s %s %d ", p2.titulo, p2.isbn, p2.autor, p2.ano);
}
    if(p3.npag > p2.npag && p3.npag > p1.npag){
	printf("DADOS DO LIVRO DE MAIOR PAGINA:  %s  %s  %s  %d ", p3.titulo, p3.isbn, p3.autor, p3.ano);
}
}
	
