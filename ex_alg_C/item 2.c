#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int dia;
    int mes;
    int ano;
}data;
int recebeData(data * d){
    scanf("%d", &d->dia);
    scanf("%d", &d->mes);
    scanf("%d", &d->ano);
}
void mostraData(data * d){
    printf("%d", d->dia);
    printf("%d", d->mes);
    printf("%d", d->ano);
}
typedef struct {
    int dia;
    int mes;
    int ano;
}data;