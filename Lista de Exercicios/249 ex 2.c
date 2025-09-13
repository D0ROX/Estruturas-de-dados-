// Ex. 2 – Comparar vetor vs lista ligada

#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo { int conteudo; struct Nodo *proximo; } Nodo;

void imprimirLista(Nodo* lista) {
    Nodo* p = lista;
    while(p) { printf("%d -> ", p->conteudo); p = p->proximo; }
    printf("NULL\n");
}

int main() {
    printf("--- Vetor: Inserção no meio ---\n");
    int vetor[20] = {10, 20, 40, 50}, tamanho_vetor = 4;
    int valor_inserir = 30, pos_inserir = 2;

    printf("Antes: ");
    for(int i=0; i<tamanho_vetor; i++) printf("%d ", vetor[i]);

    for(int i = tamanho_vetor; i > pos_inserir; i--) { vetor[i] = vetor[i-1]; }
    vetor[pos_inserir] = valor_inserir;
    tamanho_vetor++;

    printf("\nDepois: ");
    for(int i=0; i<tamanho_vetor; i++) printf("%d ", vetor[i]);
    printf("\n\n");

    printf("--- Lista Ligada: Inserção no meio ---\n");
    Nodo *n1 = malloc(sizeof(Nodo)); n1->conteudo = 10;
    Nodo *n2 = malloc(sizeof(Nodo)); n2->conteudo = 20;
    Nodo *n3 = malloc(sizeof(Nodo)); n3->conteudo = 40;
    Nodo *n4 = malloc(sizeof(Nodo)); n4->conteudo = 50;
    n1->proximo = n2; n2->proximo = n3; n3->proximo = n4; n4->proximo = NULL;
    Nodo* lista = n1;

    printf("Antes: "); imprimirLista(lista);

    Nodo* novoNodo = malloc(sizeof(Nodo));
    novoNodo->conteudo = 30;
    novoNodo->proximo = n2->proximo;
    n2->proximo = novoNodo;

    printf("Depois: "); imprimirLista(lista);

    return 0;
}
