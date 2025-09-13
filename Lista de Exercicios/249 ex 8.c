// Ex. 8 – Contar ocorrências de valor em lista

#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo { int conteudo; struct Nodo *proximo; } Nodo;
Nodo* inserir(Nodo* l, int v) {
    Nodo* n = malloc(sizeof(Nodo)); n->conteudo = v; n->proximo=l; return n;
}
void imprimir(Nodo* l) { while(l){printf("%d ", l->conteudo); l=l->proximo;} printf("\n");}

int contarOcorrencias(Nodo* lista, int valor) {
    int contador = 0;
    while(lista != NULL) {
        if(lista->conteudo == valor) contador++;
        lista = lista->proximo;
    }
    return contador;
}

int main() {
    Nodo* lista = NULL;
    lista = inserir(lista, 5);
    lista = inserir(lista, 10);
    lista = inserir(lista, 5);
    lista = inserir(lista, 20);
    lista = inserir(lista, 5);

    printf("Lista: ");
    imprimir(lista);

    int valor_procurado = 5;
    int contagem = contarOcorrencias(lista, valor_procurado);
    printf("O número %d aparece %d vezes na lista.\n", valor_procurado, contagem);

    return 0;
}
