// Ex. 10 – Simulação de atendimento no banco

#include <stdio.h>
#include <stdlib.h>

#define CAPACIDADE_MAX 100

typedef struct { int elementos[CAPACIDADE_MAX]; int inicio, fim; } EstruturaFila;
void inicializarFila(EstruturaFila *fila) { fila->inicio = 0; fila->fim = -1; }
int estaVazia(EstruturaFila *fila) { return fila->fim < fila->inicio; }
void enfileirar(EstruturaFila *fila, int valor) { if(fila->fim < CAPACIDADE_MAX - 1) fila->elementos[++fila->fim] = valor; }
int desenfileirar(EstruturaFila *fila) { return estaVazia(fila) ? -1 : fila->elementos[fila->inicio++]; }

int main() {
    EstruturaFila filaClientes;
    inicializarFila(&filaClientes);
    int totalClientes, contador;

    printf("Digite o número de clientes: ");
    scanf("%d", &totalClientes);

    for(contador = 1; contador <= totalClientes; contador++) {
        enfileirar(&filaClientes, contador);
        printf("Cliente %d entrou na fila.\n", contador);
    }

    printf("\n--- Início do Atendimento ---\n");
    while(!estaVazia(&filaClientes)) {
        printf("Cliente %d atendido.\n", desenfileirar(&filaClientes));
    }

    printf("Todos os clientes foram atendidos.\n");
    return 0;
}
