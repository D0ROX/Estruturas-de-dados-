// Ex. 1 – Implementar fila básica (init, enqueue, dequeue, empty)


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
    if(fila->fim == CAPACIDADE_MAX - 1) {
        printf("Overflow!\n");
        return;
    }
    fila->elementos[++fila->fim] = valor;
}

int desenfileirar(EstruturaFila *fila) {
    if(estaVazia(fila)) {
        printf("Underflow!\n");
        return -1;
    }
    return fila->elementos[fila->inicio++];
}

int main() {
    EstruturaFila minhaFila;
    inicializarFila(&minhaFila);

    printf("Enfileirando 10, 20, 30...\n");
    enfileirar(&minhaFila, 10);
    enfileirar(&minhaFila, 20);
    enfileirar(&minhaFila, 30);

    printf("Desenfileirando um elemento: %d\n", desenfileirar(&minhaFila));
    printf("Desenfileirando um elemento: %d\n", desenfileirar(&minhaFila));

    printf("Enfileirando 40...\n");
    enfileirar(&minhaFila, 40);

    printf("Desenfileirando todos os elementos restantes:\n");
    while(!estaVazia(&minhaFila)) {
        printf("Saiu: %d\n", desenfileirar(&minhaFila));
    }

    printf("A fila está vazia? %s\n", estaVazia(&minhaFila) ? "Sim" : "Não");

    return 0;
}
