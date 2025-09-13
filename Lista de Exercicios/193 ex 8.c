// Ex. 8 – Remover pares

#include <stdio.h>
#include <stdlib.h>

#define CAPACIDADE_MAX 10

typedef struct { int elementos[CAPACIDADE_MAX]; int inicio, fim; } EstruturaFila;
void inicializarFila(EstruturaFila *fila) { fila->inicio = 0; fila->fim = -1; }
int estaVazia(EstruturaFila *fila) { return fila->fim < fila->inicio; }
void enfileirar(EstruturaFila *fila, int valor) { if(fila->fim < CAPACIDADE_MAX - 1) fila->elementos[++fila->fim] = valor; }
int desenfileirar(EstruturaFila *fila) { return estaVazia(fila) ? -1 : fila->elementos[fila->inicio++]; }
void imprimirFila(EstruturaFila *f) { for(int i = f->inicio; i <= f->fim; i++) printf("%d ", f->elementos[i]); printf("\n");}

void removerNumerosPares(EstruturaFila *filaOriginal) {
    EstruturaFila filaAuxiliar;
    inicializarFila(&filaAuxiliar);
    while(!estaVazia(filaOriginal)) {
        int elemento = desenfileirar(filaOriginal);
        if(elemento % 2 != 0) {
            enfileirar(&filaAuxiliar, elemento);
        }
    }
    *filaOriginal = filaAuxiliar;
}

int main() {
    EstruturaFila f;
    inicializarFila(&f);
    for(int i = 1; i <= 10; i++) enfileirar(&f, i);

    printf("Fila original: ");
    imprimirFila(&f);

    removerNumerosPares(&f);

    printf("Fila sem pares: ");
    imprimirFila(&f);

    return 0;
}
