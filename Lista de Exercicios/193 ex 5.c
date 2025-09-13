// Ex. 5 – Duas filas no mesmo vetor

#include <stdio.h>
#include <stdlib.h>

#define CAPACIDADE_MAX 10

typedef struct {
    int buffer[CAPACIDADE_MAX];
    int fila1_inicio, fila1_fim;
    int fila2_inicio, fila2_fim;
} DuasFilasVetor;

void inicializarDuasFilas(DuasFilasVetor *df) {
    df->fila1_inicio = 0; df->fila1_fim = -1;
    df->fila2_inicio = CAPACIDADE_MAX - 1; df->fila2_fim = CAPACIDADE_MAX;
}

void enfileirarF1(DuasFilasVetor *df, int valor) {
    if (df->fila1_fim + 1 == df->fila2_fim) { printf("Overflow!\n"); return; }
    df->buffer[++df->fila1_fim] = valor;
}
void enfileirarF2(DuasFilasVetor *df, int valor) {
    if (df->fila1_fim + 1 == df->fila2_fim) { printf("Overflow!\n"); return; }
    df->buffer[--df->fila2_fim] = valor;
}
int desenfileirarF1(DuasFilasVetor *df) {
    if (df->fila1_fim < df->fila1_inicio) { printf("Underflow F1!\n"); return -1; }
    return df->buffer[df->fila1_inicio++];
}
int desenfileirarF2(DuasFilasVetor *df) {
    if (df->fila2_fim > df->fila2_inicio) { printf("Underflow F2!\n"); return -1; }
    return df->buffer[df->fila2_fim++];
}

int main() {
    DuasFilasVetor df;
    inicializarDuasFilas(&df);

    printf("Enfileirando na Fila 1: 1, 2, 3\n");
    enfileirarF1(&df, 1);
    enfileirarF1(&df, 2);
    enfileirarF1(&df, 3);

    printf("Enfileirando na Fila 2: 10, 9, 8\n");
    enfileirarF2(&df, 10);
    enfileirarF2(&df, 9);
    enfileirarF2(&df, 8);

    printf("Desenfileirando F1: %d\n", desenfileirarF1(&df));
    printf("Desenfileirando F2: %d\n", desenfileirarF2(&df));
    printf("Desenfileirando F1: %d\n", desenfileirarF1(&df));
    printf("Desenfileirando F2: %d\n", desenfileirarF2(&df));

    return 0;
}
