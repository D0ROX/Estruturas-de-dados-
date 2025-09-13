// Ex. 6 – Detectar overflow e underflow

#include <stdio.h>
#include <stdlib.h>

#define CAPACIDADE_MAX 5

typedef struct { int elementos[CAPACIDADE_MAX]; int inicio, fim; } EstruturaFila;
void inicializarFila(EstruturaFila *fila) { fila->inicio = 0; fila->fim = -1; }
int estaVazia(EstruturaFila *fila) { return fila->fim < fila->inicio; }
void enfileirar(EstruturaFila *fila, int valor) {
    if(fila->fim == CAPACIDADE_MAX - 1) { printf("-> Overflow!\n"); return; }
    fila->elementos[++fila->fim] = valor;
    printf("Enfileirado: %d\n", valor);
}
int desenfileirar(EstruturaFila *fila) {
    if(estaVazia(fila)) { printf("-> Underflow!\n"); return -1; }
    return fila->elementos[fila->inicio++];
}

int main() {
    EstruturaFila f;
    inicializarFila(&f);
    int i;

    printf("--- Teste de Overflow ---\n");
    printf("Capacidade da fila: %d\n", CAPACIDADE_MAX);
    for(i = 0; i < CAPACIDADE_MAX + 1; i++) {
        printf("Tentando enfileirar %d... ", (i+1)*10);
        enfileirar(&f, (i+1)*10);
    }

    printf("\n--- Teste de Underflow ---\n");
    printf("Esvaziando a fila...\n");
    while(!estaVazia(&f)) {
        printf("Desenfileirado: %d\n", desenfileirar(&f));
    }
    printf("Tentando desenfileirar de fila vazia... ");
    desenfileirar(&f);

    return 0;
}
