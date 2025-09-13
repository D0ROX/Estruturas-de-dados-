// Ex. 7 – Concatenar duas filas

#include <stdio.h>
#include <stdlib.h>

#define CAPACIDADE_MAX 20

typedef struct { int elementos[CAPACIDADE_MAX]; int inicio, fim; } EstruturaFila;
void inicializarFila(EstruturaFila *fila) { fila->inicio = 0; fila->fim = -1; }
int estaVazia(EstruturaFila *fila) { return fila->fim < fila->inicio; }
void enfileirar(EstruturaFila *fila, int valor) { if(fila->fim < CAPACIDADE_MAX - 1) fila->elementos[++fila->fim] = valor; }
int desenfileirar(EstruturaFila *fila) { return estaVazia(fila) ? -1 : fila->elementos[fila->inicio++]; }

void concatenarFilas(EstruturaFila *f1, EstruturaFila *f2) {
    while(!estaVazia(f2)) {
        if (f1->fim == CAPACIDADE_MAX - 1) {
            printf("Overflow na concatenação!\n");
            return;
        }
        enfileirar(f1, desenfileirar(f2));
    }
}

int main() {
    EstruturaFila filaA, filaB;
    inicializarFila(&filaA);
    inicializarFila(&filaB);

    enfileirar(&filaA, 1);
    enfileirar(&filaA, 2);
    enfileirar(&filaB, 3);
    enfileirar(&filaB, 4);

    printf("Fila A antes: ");
    while(!estaVazia(&filaA)) printf("%d ", desenfileirar(&filaA));
    printf("\n");

    inicializarFila(&filaA);
    enfileirar(&filaA, 1);
    enfileirar(&filaA, 2);

    printf("Concatenando Fila B em Fila A...\n");
    concatenarFilas(&filaA, &filaB);

    printf("Fila A depois: ");
    while(!estaVazia(&filaA)) printf("%d ", desenfileirar(&filaA));
    printf("\n");

    printf("Fila B depois está vazia? %s\n", estaVazia(&filaB) ? "Sim" : "Não");

    return 0;
}
