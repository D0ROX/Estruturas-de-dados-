// Ex. 2 – Retornar primeiro elemento sem remover

#include <stdio.h>
#include <stdlib.h>

#define CAPACIDADE_MAX 10

typedef struct {
    int elementos[CAPACIDADE_MAX];
    int inicio, fim;
} EstruturaFila;

void inicializarFila(EstruturaFila *fila) {
    fila->inicio = 0;
    fila->fim = -1;
}
int estaVazia(EstruturaFila *fila) {
    return fila->fim < fila->inicio;
}
void enfileirar(EstruturaFila *fila, int valor) {
    if(fila->fim == CAPACIDADE_MAX - 1) { return; }
    fila->elementos[++fila->fim] = valor;
}
int desenfileirar(EstruturaFila *fila) {
    if(estaVazia(fila)) { return -1; }
    return fila->elementos[fila->inicio++];
}

int primeiroElemento(EstruturaFila *fila) {
    if(estaVazia(fila)) {
        printf("Fila vazia!\n");
        return -1;
    }
    return fila->elementos[fila->inicio];
}

int main() {
    EstruturaFila minhaFila;
    inicializarFila(&minhaFila);

    enfileirar(&minhaFila, 100);
    enfileirar(&minhaFila, 200);

    printf("Elementos na fila: 100, 200\n");
    printf("Primeiro elemento (usando peek): %d\n", primeiroElemento(&minhaFila));

    printf("Desenfileirando: %d\n", desenfileirar(&minhaFila));

    printf("Primeiro elemento agora (usando peek): %d\n", primeiroElemento(&minhaFila));

    return 0;
}


