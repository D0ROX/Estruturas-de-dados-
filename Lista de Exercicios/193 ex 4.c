// Ex. 4 – Inverter fila com pilha

#include <stdio.h>
#include <stdlib.h>

#define CAPACIDADE_MAX 10

typedef struct { int elementos[CAPACIDADE_MAX]; int inicio, fim; } EstruturaFila;
void inicializarFila(EstruturaFila *fila) { fila->inicio = 0; fila->fim = -1; }
int estaVazia(EstruturaFila *fila) { return fila->fim < fila->inicio; }
void enfileirar(EstruturaFila *fila, int valor) { if(fila->fim < CAPACIDADE_MAX - 1) fila->elementos[++fila->fim] = valor; }
int desenfileirar(EstruturaFila *fila) { return estaVazia(fila) ? -1 : fila->elementos[fila->inicio++]; }
void imprimirFila(EstruturaFila *f) { for(int i = f->inicio; i <= f->fim; i++) printf("%d ", f->elementos[i]); printf("\n");}

typedef struct { int itens[CAPACIDADE_MAX]; int indiceTopo; } EstruturaPilha;
void inicializarPilha(EstruturaPilha *pilha) { pilha->indiceTopo = -1; }
int pilhaVazia(EstruturaPilha *pilha) { return pilha->indiceTopo == -1; }
void empilhar(EstruturaPilha *pilha, int item) { if(pilha->indiceTopo < CAPACIDADE_MAX -1) pilha->itens[++pilha->indiceTopo] = item; }
int desempilhar(EstruturaPilha *pilha) { return pilhaVazia(pilha) ? -1 : pilha->itens[pilha->indiceTopo--]; }

void inverterFila(EstruturaFila *filaParaInverter) {
    EstruturaPilha pilhaAuxiliar;
    inicializarPilha(&pilhaAuxiliar);
    while(!estaVazia(filaParaInverter)) {
        empilhar(&pilhaAuxiliar, desenfileirar(filaParaInverter));
    }
    while(!pilhaVazia(&pilhaAuxiliar)) {
        enfileirar(filaParaInverter, desempilhar(&pilhaAuxiliar));
    }
}

int main() {
    EstruturaFila f;
    inicializarFila(&f);
    enfileirar(&f, 1);
    enfileirar(&f, 2);
    enfileirar(&f, 3);
    enfileirar(&f, 4);

    printf("Fila Original: ");
    imprimirFila(&f);

    inverterFila(&f);

    printf("Fila Invertida: ");
    while(!estaVazia(&f)){
        printf("%d ", desenfileirar(&f));
    }
    printf("\n");

    return 0;
}

