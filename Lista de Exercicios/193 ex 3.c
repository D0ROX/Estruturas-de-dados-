// Ex. 3 – Ler inteiros até 0 e mostrar na ordem

#include <stdio.h>
#include <stdlib.h>

#define CAPACIDADE_MAX 100

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

int main() {
    EstruturaFila minhaFila;
    inicializarFila(&minhaFila);
    int numero;

    printf("Digite números (0 encerra): ");
    while(1) {
        scanf("%d", &numero);
        if(numero == 0) break;
        enfileirar(&minhaFila, numero);
    }

    printf("Saída: ");
    while(!estaVazia(&minhaFila)) {
        printf("%d ", desenfileirar(&minhaFila));
    }
    printf("\n");
    return 0;
}
