// Ex. 6 – Algoritmos de fila de prioridade em lista

#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo { int conteudo; struct Nodo *proximo; } Nodo;
void imprimir(Nodo* l) { while(l) { printf("%d ", l->conteudo); l=l->proximo;} printf("\n"); }

void inserirPrioridade(Nodo** lista, int p) {
    Nodo* novo = (Nodo*)malloc(sizeof(Nodo));
    novo->conteudo = p;
    if(*lista == NULL || (*lista)->conteudo > p) {
        novo->proximo = *lista; *lista = novo; return;
    }
    Nodo* it = *lista;
    while(it->proximo && it->proximo->conteudo < p) it = it->proximo;
    novo->proximo = it->proximo; it->proximo = novo;
}
int removerMinPrioridade(Nodo** lista) {
    if(*lista == NULL) return -1;
    Nodo* rem = *lista; int val = rem->conteudo;
    *lista = rem->proximo; free(rem); return val;
}

int main() {
    Nodo* pq = NULL;
    printf("Inserindo com prioridades: 50, 10, 30, 20, 40\n");
    inserirPrioridade(&pq, 50);
    inserirPrioridade(&pq, 10);
    inserirPrioridade(&pq, 30);
    inserirPrioridade(&pq, 20);
    inserirPrioridade(&pq, 40);

    printf("Fila de prioridade (sempre ordenada): ");
    imprimir(pq);

    printf("Removendo o mínimo: %d\n", removerMinPrioridade(&pq));
    printf("Removendo o mínimo: %d\n", removerMinPrioridade(&pq));

    printf("Fila de prioridade agora: ");
    imprimir(pq);

    return 0;
}
