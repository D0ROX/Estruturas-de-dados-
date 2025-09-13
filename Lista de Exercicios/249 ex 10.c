// Ex. 10 – Criar lista inversa

#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo { int conteudo; struct Nodo *proximo; } Nodo;
Nodo* inserir(Nodo* l, int v) { Nodo* n=malloc(sizeof(Nodo));n->conteudo=v;n->proximo=l;return n;}
void imprimir(Nodo* l) { while(l){printf("%d ", l->conteudo);l=l->proximo;} printf("NULL\n");}

Nodo* copiarInversa(Nodo* listaOriginal) {
    Nodo* listaInvertida = NULL;
    Nodo* cursor = listaOriginal;
    while(cursor != NULL) {
        Nodo* novoNodo = (Nodo*) malloc(sizeof(Nodo));
        novoNodo->conteudo = cursor->conteudo;
        novoNodo->proximo = listaInvertida;
        listaInvertida = novoNodo;
        cursor = cursor->proximo;
    }
    return listaInvertida;
}

int main() {
    Nodo* l_original = NULL;
    l_original = inserir(l_original, 30);
    l_original = inserir(l_original, 20);
    l_original = inserir(l_original, 10);

    printf("Lista Original: ");
    imprimir(l_original);

    Nodo* l_copia_inversa = copiarInversa(l_original);

    printf("Cópia Invertida: ");
    imprimir(l_copia_inversa);

    printf("Original (permanece inalterada): ");
    imprimir(l_original);

    return 0;
}
