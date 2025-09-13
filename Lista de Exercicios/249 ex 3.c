// Ex. 3 – Operações com listas ligadas

#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo { int conteudo; struct Nodo *proximo; } Nodo;

Nodo* inserirNoFim(Nodo* lista, int valor) {
    Nodo* novo = (Nodo*)malloc(sizeof(Nodo));
    novo->conteudo = valor; novo->proximo = NULL;
    if(lista == NULL) return novo;
    Nodo* p = lista;
    while(p->proximo) p = p->proximo;
    p->proximo = novo;
    return lista;
}

Nodo* inverter(Nodo* lista) {
    Nodo* prev = NULL; Nodo* atual = lista; Nodo* prox = NULL;
    while (atual) {
        prox = atual->proximo;
        atual->proximo = prev;
        prev = atual;
        atual = prox;
    }
    return prev;
}

void liberar(Nodo* lista) {
    Nodo* p;
    while(lista) { p = lista; lista = lista->proximo; free(p); }
}

void imprimir(Nodo* lista) {
    while(lista) { printf("%d -> ", lista->conteudo); lista = lista->proximo; }
    printf("NULL\n");
}

int main() {
    Nodo* minhaLista = NULL;
    minhaLista = inserirNoFim(minhaLista, 10);
    minhaLista = inserirNoFim(minhaLista, 20);
    minhaLista = inserirNoFim(minhaLista, 30);

    printf("Lista original: ");
    imprimir(minhaLista);

    minhaLista = inverter(minhaLista);
    printf("Lista invertida: ");
    imprimir(minhaLista);

    liberar(minhaLista);
    printf("Memória liberada.\n");

    return 0;
}
