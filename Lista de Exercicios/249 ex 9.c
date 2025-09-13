// Ex. 9 – Remover duplicados

#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo { int conteudo; struct Nodo *proximo; } Nodo;
Nodo* inserir(Nodo* l, int v) { Nodo* n=malloc(sizeof(Nodo));n->conteudo=v;n->proximo=l;return n;}
void imprimir(Nodo* l) { while(l){printf("%d ", l->conteudo);l=l->proximo;} printf("\n");}

void removerDuplicados(Nodo* lista) {
    Nodo *ptr1, *ptr2, *duplicado;
    ptr1 = lista;
    while (ptr1 != NULL && ptr1->proximo != NULL) {
        ptr2 = ptr1;
        while (ptr2->proximo != NULL) {
            if (ptr1->conteudo == ptr2->proximo->conteudo) {
                duplicado = ptr2->proximo;
                ptr2->proximo = ptr2->proximo->proximo;
                free(duplicado);
            } else {
                ptr2 = ptr2->proximo;
            }
        }
        ptr1 = ptr1->proximo;
    }
}

int main() {
    Nodo* lista = NULL;
    lista = inserir(lista, 10); lista = inserir(lista, 20);
    lista = inserir(lista, 10); lista = inserir(lista, 30);
    lista = inserir(lista, 20); lista = inserir(lista, 20);

    printf("Lista com duplicados: ");
    imprimir(lista);

    removerDuplicados(lista);

    printf("Lista sem duplicados: ");
    imprimir(lista);

    return 0;
}
