// Ex. 9 – Fila circular

#include <stdio.h>
#include <stdlib.h>

#define CAPACIDADE_MAX 5

typedef struct { int buffer[CAPACIDADE_MAX]; int leitura, escrita, quantidade; } FilaCircular;

void inicializarFilaCircular(FilaCircular *fila) {
    fila->leitura = 0; fila->escrita = -1; fila->quantidade = 0;
}
int filaCircularVazia(FilaCircular *fila) { return fila->quantidade == 0; }
int filaCircularCheia(FilaCircular *fila) { return fila->quantidade == CAPACIDADE_MAX; }

void enfileirarCircular(FilaCircular *fila, int elem) {
    if(filaCircularCheia(fila)) { printf("Overflow!\n"); return; }
    fila->escrita = (fila->escrita + 1) % CAPACIDADE_MAX;
    fila->buffer[fila->escrita] = elem;
    fila->quantidade++;
}
int desenfileirarCircular(FilaCircular *fila) {
    if(filaCircularVazia(fila)) { printf("Underflow!\n"); return -1; }
    int valor = fila->buffer[fila->leitura];
    fila->leitura = (fila->leitura + 1) % CAPACIDADE_MAX;
    fila->quantidade--;
    return valor;
}

int main() {
    FilaCircular fc;
    inicializarFilaCircular(&fc);

    printf("Enfileirando 10, 20, 30\n");
    enfileirarCircular(&fc, 10);
    enfileirarCircular(&fc, 20);
    enfileirarCircular(&fc, 30);

    printf("Desenfileirando: %d\n", desenfileirarCircular(&fc));
    printf("Desenfileirando: %d\n", desenfileirarCircular(&fc));

    printf("Enfileirando 40, 50, 60 (para testar a circularidade)\n");
    enfileirarCircular(&fc, 40);
    enfileirarCircular(&fc, 50);
    enfileirarCircular(&fc, 60);

    printf("Esvaziando a fila circular:\n");
    while(!filaCircularVazia(&fc)) {
        printf("Saiu: %d\n", desenfileirarCircular(&fc));
    }
    return 0;
}
