// Ex. 7 – Pilha e fila com nó de cabeçalho

#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo { int conteudo; struct Nodo *proximo; } Nodo;
typedef struct Cabecalho { int dummy; Nodo* proximo; } Cabecalho;

void push(Cabecalho* cab, int v) {
    Nodo* novo = (Nodo*)malloc(sizeof(Nodo));
    novo->conteudo = v; novo->proximo = cab->proximo; cab->proximo = novo;
}
int pop(Cabecalho* cab) {
    if(cab->proximo == NULL) return -1;
    Nodo* rem = cab->proximo; int v = rem->conteudo;
    cab->proximo = rem->proximo; free(rem); return v;
}

int main() {
    Cabecalho minhaPilha;
    minhaPilha.proximo = NULL;

    printf("Empilhando 1, 2, 3...\n");
    push(&minhaPilha, 1);
    push(&minhaPilha, 2);
    push(&minhaPilha, 3);

    printf("Desempilhando: %d\n", pop(&minhaPilha));
    printf("Desempilhando: %d\n", pop(&minhaPilha));
    printf("Desempilhando: %d\n", pop(&minhaPilha));
    printf("Tentando desempilhar de novo: %d\n", pop(&minhaPilha));

    return 0;
}
