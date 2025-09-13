//Ex. 1 – Implementar pilhas e filas em um único vetor

#include <stdio.h>
#include <stdlib.h>

#define CAPACIDADE_MAX 10
#define VETOR_METADE (CAPACIDADE_MAX / 2)

typedef struct {
    int dados[CAPACIDADE_MAX];
    int topo_pilha;
    int frente_fila, tras_fila, qtd_fila;
} PilhaFilaVetor;

void inicializarPilhaFila(PilhaFilaVetor* pf) {
    pf->topo_pilha = -1;
    pf->frente_fila = VETOR_METADE;
    pf->tras_fila = VETOR_METADE - 1;
    pf->qtd_fila = 0;
}
void push(PilhaFilaVetor* pf, int v) {
    if (pf->topo_pilha >= VETOR_METADE - 1) { printf("Overflow Pilha!\n"); return; }
    pf->dados[++pf->topo_pilha] = v;
}
int pop(PilhaFilaVetor* pf) {
    if (pf->topo_pilha < 0) { printf("Underflow Pilha!\n"); return -1; }
    return pf->dados[pf->topo_pilha--];
}
void enqueue(PilhaFilaVetor* pf, int v) {
    if (pf->qtd_fila >= VETOR_METADE) { printf("Overflow Fila!\n"); return; }
    pf->tras_fila = (pf->tras_fila + 1 - VETOR_METADE) % VETOR_METADE + VETOR_METADE;
    pf->dados[pf->tras_fila] = v;
    pf->qtd_fila++;
}
int dequeue(PilhaFilaVetor* pf) {
    if (pf->qtd_fila == 0) { printf("Underflow Fila!\n"); return -1; }
    int val = pf->dados[pf->frente_fila];
    pf->frente_fila = (pf->frente_fila + 1 - VETOR_METADE) % VETOR_METADE + VETOR_METADE;
    pf->qtd_fila--;
    return val;
}

int main() {
    PilhaFilaVetor pf;
    inicializarPilhaFila(&pf);

    printf("Testando Pilha (limite %d)...\n", VETOR_METADE);
    push(&pf, 10); push(&pf, 20);
    printf("Pop: %d\n", pop(&pf));

    printf("\nTestando Fila (limite %d)...\n", VETOR_METADE);
    enqueue(&pf, 100); enqueue(&pf, 200);
    printf("Dequeue: %d\n", dequeue(&pf));
    enqueue(&pf, 300);
    printf("Dequeue: %d\n", dequeue(&pf));
    printf("Dequeue: %d\n", dequeue(&pf));

    return 0;
}
